#include <iostream>

using namespace std;

double algorithm_A(int a,int b) {
	while (a != b) {
		if (a > b) {
			if (a % b == 0) {
				return b;
			}
			else {
				a = a % b;
			}
		}
		else {
			if (b % a == 0) {
				return a;
			}
			else {
				b = b % a;
			}
		}
	}
}

double algorithm_B(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

void main() {
	setlocale(LC_ALL, "Ru");
	int a, b;
	double res;
	cout << "¬ведите числа a и b " << endl;
	cin >> a >> b;
	res = algorithm_A(a, b);
	cout << res << endl;
	res = algorithm_B(a, b);
	cout << res << endl;
}