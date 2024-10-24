#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main() {
	int i;
	double summa, s;
	summa = 0;
	setlocale(LC_ALL, "Ru");
	ofstream file("C:\\Users\\Богдан\\OneDrive\\Документы\\test 5.txt");
	for (i = 0; i <= 9; i++){
		cin >> s ;
		file << s << endl;
	}
	file.close();
	ifstream fl("C:\\Users\\Богдан\\OneDrive\\Документы\\test 5.txt");
	for (i = 0; i <= 9; i++) {
		fl >> s;
		summa += s;
	}
	cout << summa;
	fl.close();
	return 0;
}
