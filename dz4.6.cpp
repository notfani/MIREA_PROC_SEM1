#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	int i = 0;
	cout << "������� ����� � ������� �������" << endl;
	string tablemeaning, cinmeaning;
	cin >> cinmeaning;
	ifstream file("C:\\Users\\������\\OneDrive\\���������\\ROMATABLE.txt");
	while (!file.eof()) {
		i++;
		file >> tablemeaning;
		if (tablemeaning == cinmeaning) {
			cout << "���� ����� " << i;
			return 1;
		}
	}
	cout << "������ ����� ���:/";
	return 0;
	file.close();
}