#include <iostream>
#include <string>

using namespace std;

double factorial(double k) {
	double result = 1;
	for (double i = 1; i <= k; i++) {
		result *= i;
	}
	return result;
}

int main() {
	setlocale(LC_ALL, "Ru");
	int n, k = 1;
	double sum = 0, k_factorial, sum_delit = 0;
	int znak = 1;
	cout << "Введите n" << endl;
	cin >> n;
	if (n <= 0) {
		cout << "ERROOOOOR";
		return 0; 
	}
	for (k; k <= n; k++) {
		znak = 1;
		for (int i = 1; i <= k; i++) {
			sum_delit += 1 / i * znak;
			znak *= -1;
		}
		sum += factorial(k) / sum_delit;
	}
	cout << "Ответ: " << sum;
	return 1;
}	