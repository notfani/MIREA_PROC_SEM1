#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	float a, b, c, D, x1, x2;
	cout << "Введите a ";
	cin >> a;
	cout << "Введите b ";
	cin >> b;
	cout << "Введите c ";
	cin >> c;
	D = b * b - 4 * a * c;
	if (a == 0 && b == 0 && c == 0){
		cout << "X любое число!";
	}
	else if (a == 0 && b == 0) {
		cout << "Корней нет";
	}
	else if (D < 0) {
		cout << "Корней нет";
	}
	else if (a == 0) {
		x1 = -c / b;
		cout << "X равен " << x1;
	}
	else if (D == 0) {
		x1 = x2 = -b / (2 * a);
		cout << "Ответ " << x1;
	}
	else if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	return 0;
}