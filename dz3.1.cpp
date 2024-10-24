#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double s, p, n, m, r;
	setlocale(0, "");
	cout << "Введите S p n ";
	cin >> s >> p >> n;
	if (n == 0) {
		cout << "Errroooor";
		return 0;
	}
		
	if (p == 0) {
		cout << "m = " << s / (12 * n);
		return 1;
	}
	
	r = p / 100;
	if (r > 1.5) {
		cout << "Вашему государству пришёл конец, инфляция пипец какая, вы не вывизите кредит, не берите его!";
		return 0;
	}
	m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
	cout << "m = " << m;
	return 0;
}