#include <iostream>
#include <fstream>
#include <string>
#

using namespace std;

void main() {
	setlocale(LC_ALL, "Ru");
	string adding_text, basic_text, new_text;
	cout << "Введите текст, который хотите добавить(только на английском языке):" << endl;
	getline(cin, adding_text);
	ifstream old_file;
	old_file.open("C:\\Users\\Богдан\\OneDrive\\Документы\\tests\\test 7.txt");
	getline(old_file, basic_text);
	old_file.close();
	new_text = basic_text + " " + adding_text;
	ofstream new_file;
	new_file.open("C:\\Users\\Богдан\\OneDrive\\Документы\\tests\\test 7.txt");
	new_file << new_text;
	new_file.close();
}