#include <iostream>

using namespace std;

int sign(double x) {
	if (x > 0) {
		return 1;
	}
	else if (x == 0) {
		return 0;
	}
	else if (x < 0) {
		return -1;
	}
}

int main() {
	double chislo, znak;
	setlocale(LC_ALL, "Ru");
	cout << "Введите ваше число" << endl;
	cin >> chislo;
	znak = sign(chislo);
	if (znak == 0) {
		cout << "У нуля нет знака";
		return 1;
	}
	else if (znak == 1) {
		cout << "+";
		return 1;
	}
	else if (znak == -1) {
		cout << "-";
		return 1;
	}
}