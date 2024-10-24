#include <iostream>
#include <math.h>

using namespace std;

void main() {
	setlocale(LC_ALL, "Ru");
	int vod;
	double r, pi, a, b, c, p, s;
	pi = 3.14;
	cout << "Если вы хотите найти площадь круга, введите 1, если площадь треугольника 2, если площадь прямоугольника то 3" << endl;
	cin >> vod;
	switch (vod) {
	case 1:
		cout << "Введите радиус" << endl;
		cin >> r;
		if (r <= 0) {
			cout << "Ошибка, не бывает отрицательного радиуса";
			break;
		}
		else {
			s = pi * pow(r, 2);
			cout << "Площадь равна " << s;
			break;
		}
	case 2:
		cout << "Введите стороны треугольника " << endl;
		cin >> a >> b >> c;
		if (a < 1 || b < 1 || c < 1) {
			cout << "Ошибка, не бывает отрицательной или нулевой стороны";
			break;
		}
		else if (a + b <= c || b + c <= a || c + a <= b) {
			cout << "Не выполняется правило треугольника";
			break;
		}
		else {
			p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "Площадь равна " << s;
			break;
		}
	case 3:
		cout << "Введите стороны прямоугольника " << endl;
		cin >> a >> b;
		if (a <= 0 || b <= 0) {
			cout << "Ошибка, не бывает отрицательной стороны";
			break;
		}
		else {
			s = a * b;
			cout << "Площадь равна " << s;
			break;
		}
	default:
		cout << "Неверный вариант";
		break;
	}
	

}