#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(0, "");
	double x, y, z, b;
	cout << "Введите x, y, b" << endl;
	cin >> x >> y >> b;
	if ((b - y) > 0 && (b - x) >= 0) {
		z = log(b - y) * sqrt(b - x);
		cout << "Ответ" << z;
	}
	else {
		cout << "EROR: 404 Not Found";
	}
	return 0;
}

