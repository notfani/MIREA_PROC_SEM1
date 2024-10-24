#include <iostream>

using namespace std;

void main() {
	int i, m, c, variant;
	double s0, s1;
	s0 = 0;
	setlocale(LC_ALL, "Ru");
	cout << "Введите вариант 1 или 2 ";
	cin >> variant;
	switch (variant) {
	case 1:
		m = 37;
		c = 64;
		for (i = 0; i <= 3; i++) {
			s1 = (m * s0 + i) / c;
			s0 = s1;
			cout << "Ответ: " << s0 << endl;
		}
		break;
	case 2:
		m = 25173;
		c = 65537;
		for (i = 0; i <= 13849; i++) {
			s1 = (m * s0 + i) / c;
			s0 = s1;
			cout << "Ответ: " << s0 << endl;
		}
		break;
	default:
		cout << "Неверный вариант";
		break;
	}
}