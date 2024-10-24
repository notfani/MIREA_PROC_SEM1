#include <iostream>
#include <algorithm>

using namespace std;

void main() {
	setlocale(LC_ALL, "Ru");
	int n;
	double sum = 0, current_value, delta_value, max_value = 0, min_value = INT16_MAX;
	cout << "Введите колличетсво переменных" << endl;
	cin >> n;
	cout << "Теперь введите ваши числа" << endl;
	for (int i = 0; i < n; i++) {
		cin >> current_value;
		sum += current_value;
		min_value = min(min_value, current_value);
		max_value = max(max_value, current_value);
	}
	delta_value = sum / n;
	cout << "Колличество чисел " << n << endl << "Среднее значение " << delta_value << endl << "Максимальное число " << max_value << endl << "Минимальное число " << min_value;
}