#include <iostream>

using namespace std;

bool prime(int chislo) {
	int d = 2, deliteli = 2;
	while (d * d <= chislo) {
		if (chislo % d == 0) {
			deliteli += 1;
		}
		d += 1;
	}
	if (deliteli == 2) {
		return true;
	}
	else {
		return false;
	}
}

void main() {
	setlocale(LC_ALL, "Ru");
	int i, n;
	cout << "¬ведите N: " << endl;
	cin >> n;
	if (n <= 1) {
		cout << "„исел нет" << endl;
	}
	if (n == 2) {
		cout << " 2";
	}
	for (i = 2; i < n; i++) {
		if (prime(i) == true) {
			cout << i << " ";
		}
	}
}
