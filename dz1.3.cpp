#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	float c, b, x;
	cout << "������� ����� b ";
	cin >> b;
	cout << "������� ����� c ";
	cin >> c;
	if (b == 0 && c == 0) {
		cout << "X - ����� �����";
	}
	else if (b == 0) {
		cout << "������ ��� ";
	}
	else if (c == 0) {
		cout << "X ����� 0";
	}
	else if (b != 0 && c != 0) {
		x = -c / b;
		cout << "X ����� " << x;
	}
	return 0;
}