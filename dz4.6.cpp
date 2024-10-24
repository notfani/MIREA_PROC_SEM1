#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	int i = 0;
	cout << "Введите число в римской системе" << endl;
	string tablemeaning, cinmeaning;
	cin >> cinmeaning;
	ifstream file("C:\\Users\\Богдан\\OneDrive\\Документы\\ROMATABLE.txt");
	while (!file.eof()) {
		i++;
		file >> tablemeaning;
		if (tablemeaning == cinmeaning) {
			cout << "Ваше число " << i;
			return 1;
		}
	}
	cout << "Такого числа нет:/";
	return 0;
	file.close();
}