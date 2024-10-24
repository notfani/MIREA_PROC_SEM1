#include <iostream>
#include <math.h>

using namespace std;

void main() {
	setlocale(LC_ALL, "Ru");
	int vod;
	double r, pi, a, b, c, p, s;
	pi = 3.14;
	cout << "���� �� ������ ����� ������� �����, ������� 1, ���� ������� ������������ 2, ���� ������� �������������� �� 3" << endl;
	cin >> vod;
	switch (vod) {
	case 1:
		cout << "������� ������" << endl;
		cin >> r;
		if (r <= 0) {
			cout << "������, �� ������ �������������� �������";
			break;
		}
		else {
			s = pi * pow(r, 2);
			cout << "������� ����� " << s;
			break;
		}
	case 2:
		cout << "������� ������� ������������ " << endl;
		cin >> a >> b >> c;
		if (a < 1 || b < 1 || c < 1) {
			cout << "������, �� ������ ������������� ��� ������� �������";
			break;
		}
		else if (a + b <= c || b + c <= a || c + a <= b) {
			cout << "�� ����������� ������� ������������";
			break;
		}
		else {
			p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "������� ����� " << s;
			break;
		}
	case 3:
		cout << "������� ������� �������������� " << endl;
		cin >> a >> b;
		if (a <= 0 || b <= 0) {
			cout << "������, �� ������ ������������� �������";
			break;
		}
		else {
			s = a * b;
			cout << "������� ����� " << s;
			break;
		}
	default:
		cout << "�������� �������";
		break;
	}
	

}