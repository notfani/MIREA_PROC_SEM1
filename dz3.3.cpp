#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string s;
	setlocale(0, "");
	ifstream file;
	file.open("C:\\Users\\Богдан\\OneDrive\\Документы\\test 3.txt");
	file >> s;
	cout << s;
	file.close();
	return 1;
	}