#pragma once


typedef class LoadingDialog * LoadingDialogPtr;

class LoadingDialog
{
	struct ModlessResult
	{
		DWORD resourceId;
		HANDLE event;
		std::string error_message;
		LoadingDialogPtr dialog;
	};

	HWND hWnd;
	HANDLE closeHandle;
	static DWORD WINAPI ModelessThreadFunc(LPVOID); 
	static INT_PTR CALLBACK ModlessDialogProc(__in HWND hWnd, __in  UINT uMsg, __in  WPARAM wParam, __in  LPARAM lParam);
	
	LoadingDialog(HWND);
public:
	~LoadingDialog(void);
	
	void Close();
	static LoadingDialogPtr Show(HWND hWnd);
};
