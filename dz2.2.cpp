#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");
	double x, a, w;
	cout << "������� ����� x" << endl;
	cin >> x;
	cout << "������� ����� a" << endl;
	cin >> a;
	if (abs(x) < 1 && x != 0) {
		w = a * log(abs(x));
		cout << "�����" << w;
	}
	else if (abs(x) >= 1) {
		if ((a - pow(x, 2)) < 0) {
			cout << "�� �������������� ����� ������ ��������� ������!";
		}
		else {
			w = sqrt(a - pow(x, 2));
			cout << "�����" << w;
		}
	}
	else {
		cout << "x �� ����� ���� 0 ^_^";
	}
	return 0;
}