#include <iostream>
using namespace std;

int main() {
	float a, b;
	setlocale(0, "");
	cout << "Введите число a ";
	cin >> a;
	cout << "Введите число b ";
	cin >> b;
	cout << a + b << " Сумма чисел" << endl;
	cout << a - b << " Разность чисел" << endl;
	cout << a * b << " Произведение чисел" << endl;
	if (b != 0) {
		cout << a / b << " Частное чисел" << endl;
	}
	else {
		cout << "На ноль делить нельзя!!!" << endl;
	}
	return 0;
}