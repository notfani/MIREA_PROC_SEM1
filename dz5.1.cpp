#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	int a, b, global_a, global_b;
	cout << "Введите числа A и B (Причём числа должны быть в формате int)" << endl;
	cin >> a >> b;
	if (a == 0 || b == 0) {
		cout << "Division zero!";
		return 0;
	}
	cout << "_________________________________________________________________" << endl;
	global_a = abs(a); 
	global_b = abs(b);
	a = global_a;
	b = global_b;
	while (a != b) {
		if (a > b) {
			if (a % b == 0) {
				cout << b << endl;
				break;
			}
			else {
				a = a % b;
			}
		}
		else {
			if (b % a == 0) {
				cout << a << endl;
				break;
			}
			else {
				b = b % a;
			}
		}
	}
	a = global_a;
	b = global_b;
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	cout << a;
	return 1;
}