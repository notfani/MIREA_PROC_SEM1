#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	float a, b, c, D, x1, x2;
	cout << "������� a ";
	cin >> a;
	cout << "������� b ";
	cin >> b;
	cout << "������� c ";
	cin >> c;
	D = b * b - 4 * a * c;
	if (a == 0 && b == 0 && c == 0){
		cout << "X ����� �����!";
	}
	else if (a == 0 && b == 0) {
		cout << "������ ���";
	}
	else if (D < 0) {
		cout << "������ ���";
	}
	else if (a == 0) {
		x1 = -c / b;
		cout << "X ����� " << x1;
	}
	else if (D == 0) {
		x1 = x2 = -b / (2 * a);
		cout << "����� " << x1;
	}
	else if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	return 0;
}