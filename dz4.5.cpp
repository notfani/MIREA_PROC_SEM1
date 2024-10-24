#include <iostream>
#include <Windows.h>

using namespace std;

void main() {
	HWND hWnd = GetConsoleWindow();
	HDC hDC = GetDC(hWnd);
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 0, 85, NULL);
	LineTo(hDC, 200, 85);
	MoveToEx(hDC, 100, 0, NULL);
	LineTo(hDC, 100, 170);
	for (float x = -8.0f; x <= 8.0f; x += 0.01f) {
		MoveToEx(hDC, 10 * x + 100, -10 * sin(x) + 85, NULL);
		LineTo(hDC, 10 * x + 100, -10 * sin(x) + 85);
	}
	ReleaseDC(hWnd, hDC);
	cin.get();
}