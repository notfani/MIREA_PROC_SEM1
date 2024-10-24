#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void main() {
	setlocale(LC_ALL, "Ru");
	string s;
	int current_lenght, max_lenght;
	ifstream file;
	file.open("C:\\Users\\Богдан\\OneDrive\\Документы\\tests\\test 6.txt");
	while (!file.eof()) {
		file >> s;
		current_lenght = size(s);
		max_lenght = max(current_lenght, max_lenght);
	}
	file.close();
	ifstream file2;
	file2.open("C:\\Users\\Богдан\\OneDrive\\Документы\\tests\\test 6.txt");
	while (!file2.eof()) {
		file2 >> s;
		if (size(s) == max_lenght) {
			cout <<  s << " ";
		}
	}
	file2.close();
	cout << endl << max_lenght;

}