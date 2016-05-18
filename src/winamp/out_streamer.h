#include "..\winamp\sdk\OUT.H"

extern HINSTANCE hInstance;

extern "C"
{
	__declspec( dllexport ) Out_Module * winampGetOutModule();
}


void OutputStream_WriteCallback(int, char *, int);
unsigned ConvertBytesToMiliseconds(unsigned bytesCount);
unsigned ConvertMilisecondsToBytesCount(unsigned miliseconds);


int Plugin_GetOutputTime();
int Plugin_GetWrittenTime();

int Plugin_GetRealWrittenTime();
int Plugin_GetRealOutputTime();

int Plugin_GetWrittenTime_Debug();
int Plugin_GetOutputTime_Debug();
