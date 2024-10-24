#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	float c, b, x;
	cout << "Введите число b ";
	cin >> b;
	cout << "Введите число c ";
	cin >> c;
	if (b == 0 && c == 0) {
		cout << "X - любое число";
	}
	else if (b == 0) {
		cout << "Корней нет ";
	}
	else if (c == 0) {
		cout << "X равен 0";
	}
	else if (b != 0 && c != 0) {
		x = -c / b;
		cout << "X равен " << x;
	}
	return 0;
}