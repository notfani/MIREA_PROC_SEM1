#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float R, r, l, h, Pi, V, S;
	Pi = 3.14;
	setlocale(0, "");
	cout << "������� r " << endl;
	cin >> r;
	cout << "������� h " << endl;
	cin >> h;
	cout << "������� R" << endl;
	cin >> R;
	if (r < 0 || h < 0 || R < 0)
		cout << "�����? � ���� ��� ������� ������������� �����?";
	else {
		l = sqrt((R - r) * (R - r) + h * h);
		V = (1 / 3.0) * Pi * h * (R * R + R * r + r * r);
		S = Pi * (pow(R, 2) + (r + R) * l + pow(r, 2));
		cout << "����� ���������� ������ " << V << endl;
		cout << "������� ����������� ���������� ������ " << S;
	}
	return 0;
}