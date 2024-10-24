#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");
	double x, a, w;
	cout << "¬ведите любой x" << endl;
	cin >> x;
	cout << "¬ведите любой a" << endl;
	cin >> a;
	if (abs(x) < 1 && x != 0) {
		w = a * log(abs(x));
		cout << "ќтвет" << w;
	}
	else if (abs(x) >= 1) {
		if ((a - pow(x, 2)) < 0) {
			cout << "»з отрицательного числа нельз€ вычислить корень!";
		}
		else {
			w = sqrt(a - pow(x, 2));
			cout << "ќтвет" << w;
		}
	}
	else {
		cout << "x не может быть 0 ^_^";
	}
	return 0;
}