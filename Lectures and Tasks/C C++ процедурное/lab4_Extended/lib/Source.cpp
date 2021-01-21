#include <windows.h>
#include "Header.h"

void StartDemo()
{
	STARTUPINFOA si = {sizeof(si)};
	PROCESS_INFORMATION pi;
	bool b = CreateProcessA(0, "demo", 0, 0, FALSE, 0, 0, 0, &si, &pi);
	if (!b)
	{
		MessageBoxA(0, "�������!", "��������� ������� ����� demo.exe � ������� ����������", MB_OK);
	}
	else
	{
		WaitForInputIdle(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);

	}
}

void SetDimensions(int rows, int columns)
{
	HWND hw = FindWindowA(0, "Demo");
	if (hw == 0)
	{
		MessageBoxA(0, "�������!", "��������� �������� �� ���������� demo.exe", MB_OK);
	}
	else
	{
		static UINT m = RegisterWindowMessageA("Dimensions");
		SendMessageA(hw, m, (WPARAM)rows, (LPARAM)columns);
	}
}


//������� �����
void SetColor(Colors color)
{
	HWND hw = FindWindowA(0, "Demo");
	if (hw == 0)
	{
		MessageBoxA(0, "�������!", "��������� �������� �� ���������� demo.exe", MB_OK);
	}
	else
	{
		static UINT m = RegisterWindowMessageA("Color");
		SendMessageA(hw, m, (WPARAM)color, (LPARAM)0);
	}
}

void pause(int ms)
{
	Sleep(ms);
}
//void DrawBalls(int** p, int rows, int columns)
//{
//	HWND hw = FindWindowA(0, "Demo");
//	if (hw == 0)
//	{
//		MessageBoxA(0, "�������!", "��������� �������� �� ���������� demo.exe", MB_OK);
//	}
//	else
//	{
//		COPYDATASTRUCT cds;
//		cds.cbData = columns;
//		cds.dwData = 33;
//		for (int i = 0; i < rows; i++)
//		{
//			cds.lpData = p[i];
//			SendMessageA(hw, WM_COPYDATA, 0, (LPARAM)&cds);
//		}
//	}
//
//}


void DrawBalls(int* p, int rows, int columns)
{
	HWND hw = FindWindowA(0, "demo");
	if (hw == 0)
	{
		MessageBoxA(0, "�������!", "��������� �������� �� ���������� demo.exe", MB_OK);
	}
	else
	{
		//�������� ��������
		static UINT m = RegisterWindowMessageA("TestDimensions");
		LRESULT res = SendMessageA(hw, m, (WPARAM)rows, (LPARAM)columns);
		if (!res)
		{
			MessageBoxA(hw, "������� ������������ �������!", "���... ������ ������ �� ����!", MB_OK);
			return;
		}
		//�������� ������
		COPYDATASTRUCT cds;
		cds.cbData = columns*rows*sizeof(int);
		cds.dwData = 33;
	
		cds.lpData = p;
		SendMessageA(hw, WM_COPYDATA, 0, (LPARAM)&cds);
		
	}

}
void FinishDemo()
{
	HWND hw = FindWindowA(0, "demo");
	if (hw == 0)
	{
		MessageBoxA(0, "�������!", "��������� �������� �� ���������� demo.exe", MB_OK);
	}
	else
	{
		SendMessageA(hw, WM_CLOSE, 0, 0);
	}

}