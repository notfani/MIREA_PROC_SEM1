#include <iostream>
using namespace std;

int main() {
	float a, b;
	setlocale(0, "");
	cout << "������� ����� a ";
	cin >> a;
	cout << "������� ����� b ";
	cin >> b;
	cout << a + b << " ����� �����" << endl;
	cout << a - b << " �������� �����" << endl;
	cout << a * b << " ������������ �����" << endl;
	if (b != 0) {
		cout << a / b << " ������� �����" << endl;
	}
	else {
		cout << "�� ���� ������ ������!!!" << endl;
	}
	return 0;
}