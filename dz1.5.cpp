#include <iostream>
using namespace std;

int main() {
	char vrem, lamp, shtory;
	setlocale(0, "");
	cout << "������ ����? ���� �� �� ������� Y, � ���� ���, �� ����� ������ ������ " << endl;
	cin >> vrem;
	cout << "����� ���������? ���� �� �� ������� Y, � ���� ���, �� ����� ������ ������ " << endl;
	cin >> shtory;
	cout << "����� ��������? ���� �� �� ������� Y, � ���� ���, �� ����� ������ ������ " << endl;
	cin >> lamp;
	if (vrem == 'Y' && shtory == 'Y' || lamp == 'Y') {
		cout << "� ������� ������!";
	}
	else {
		cout << "� ������� �����!";
	}
	return 0;
}