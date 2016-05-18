#include "stdafx.h"
#include "LoadingDialog.h"

#include <minmax.h>
#include <gdiplus.h>
#pragma comment(lib,"gdiplus.lib")

extern HINSTANCE hInstance;

LoadingDialog::LoadingDialog(HWND hWnd) : hWnd(hWnd)
{
	closeHandle = ::CreateEvent(NULL, TRUE, FALSE, NULL);
	assert (hWnd != NULL);
}

LoadingDialog::~LoadingDialog()
{
	auto handle = closeHandle;
	if (handle != NULL)
	{
		::CloseHandle(closeHandle);
		closeHandle = NULL;
	}

	Close();
}


/*
using namespace Gdiplus;

HBITMAP LoadImageWithGdiPlus(LPCTSTR pszPngPath)
{
  Image image(pszPngPath);
  int width = image.GetWidth();
  int height = image.GetHeight();

  BITMAPINFO bmi;
  bmi.bmiHeader.biBitCount = 32;
  bmi.bmiHeader.biClrImportant = 0;
  bmi.bmiHeader.biClrUsed = 0;
  bmi.bmiHeader.biCompression = BI_RGB;
  bmi.bmiHeader.biHeight = height;
  bmi.bmiHeader.biPlanes = 1;
  bmi.bmiHeader.biSize = sizeof (bmi.bmiHeader);
  bmi.bmiHeader.biSizeImage = 0; //calc later
  bmi.bmiHeader.biWidth = width;
  bmi.bmiHeader.biXPelsPerMeter = 0;
  bmi.bmiHeader.biYPelsPerMeter = 0;
  BYTE* pBmp = NULL;
  HBITMAP hbm = CreateDIBSection(NULL,&bmi,DIB_RGB_COLORS,(void**)&pBmp,NULL,0);
  HDC hdc = CreateCompatibleDC(NULL);
  HGDIOBJ hobj = SelectObject(hdc,hbm);

  Graphics graphics(hdc);
  graphics.DrawImage(&image,0,0);

  SelectObject(hdc,hobj);
  DeleteDC(hdc);
  return hbm;
}
*/
void LoadingDialog::Close()
{
	if (hWnd == NULL)
		throw std::exception("Unable to close the dialog because this was not created yet");
	::EndDialog(hWnd, TRUE);
}

LoadingDialogPtr LoadingDialog::Show(HWND hWnd)
{
	auto result = new ModlessResult();
	result->resourceId = 103;//
	result->event = ::CreateEvent(NULL, TRUE, FALSE, NULL);

	::CloseHandle(::CreateThread(NULL, 0, &LoadingDialog::ModelessThreadFunc, result, NULL, NULL)); 
	::WaitForSingleObject(result->event, INFINITE);
	::CloseHandle(result->event);

	std::unique_ptr<ModlessResult> auto_ptr(result);
	if (!result->error_message.empty())
		throw std::exception(result->error_message.c_str());
	
	return result->dialog;
}

DWORD WINAPI LoadingDialog::ModelessThreadFunc(LPVOID state)
{
	auto modless_state = reinterpret_cast<ModlessResult *>(state);
	HWND hwnd = ::CreateDialogParam(hInstance, MAKEINTRESOURCE(modless_state->resourceId), ::GetDesktopWindow(), &LoadingDialog::ModlessDialogProc, NULL);
	if (hwnd == NULL)
	{
		modless_state->error_message = "Unable to create the Loading dialog";
		::SetEvent(modless_state->event);
		return 0;
	}

	::ShowWindow(hwnd, SW_SHOW);
	LoadingDialogPtr dialog = new LoadingDialog(hwnd);
	::SetWindowLongPtr(hwnd, GWLP_USERDATA, reinterpret_cast<LONG>(dialog));
	modless_state->dialog = dialog;
	::SetEvent(modless_state->event);

	
	MSG msg;
	for(;;)
    {
		if (::WaitForSingleObject(dialog->closeHandle, 1) == WAIT_OBJECT_0)
		{
			auto handle = dialog->closeHandle;
			if (handle != NULL)
			{
				::CloseHandle(handle);
				dialog->closeHandle = NULL;
			}
			break;
		}

		::PeekMessage(&msg, hwnd, 0, 0, PM_REMOVE);

      ::TranslateMessage(&msg);
      ::DispatchMessage(&msg);
    }

	return 0;
}


INT_PTR CALLBACK LoadingDialog::ModlessDialogProc(__in HWND hWnd, __in  UINT uMsg, __in  WPARAM wParam, __in  LPARAM lParam)
{
	switch(uMsg)
	{
	case WM_INITDIALOG:
		{
			BOOL isModal = lParam != NULL;
		}break;

	case WM_PAINT:
		break;

	case WM_COMMAND:
		switch(LOWORD(wParam))
		{
			case IDOK:
				break;
		}
		break;

	case WM_DESTROY:
		{
			auto x = reinterpret_cast<LoadingDialog *>(::GetWindowLongPtr(hWnd, GWLP_USERDATA));
			::SetEvent(x->closeHandle);
			return ::DestroyWindow(hWnd);
		}
	}

	return ::DefWindowProc(hWnd, uMsg, wParam, lParam);
}
