#include <iostream>
using namespace std;

int main() {
	char vrem, lamp, shtory;
	setlocale(0, "");
	cout << "Сейчас день? Если да то введите Y, а если нет, то любой другой символ " << endl;
	cin >> vrem;
	cout << "Шторы задвинуты? Если да то введите Y, а если нет, то любой другой символ " << endl;
	cin >> shtory;
	cout << "Лампа включена? Если да то введите Y, а если нет, то любой другой символ " << endl;
	cin >> lamp;
	if (vrem == 'Y' && shtory == 'Y' || lamp == 'Y') {
		cout << "В комнате светло!";
	}
	else {
		cout << "В комнате темно!";
	}
	return 0;
}