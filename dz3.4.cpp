#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char s;
	int proverka;
	setlocale(0, "");
	ifstream file;
	file.open("C:\\Users\\������\\OneDrive\\���������\\test 3.txt");
	while (!file.eof()) {
		file >> s;
		proverka = int(s);
		if (isdigit(proverka))
			cout << s;
	}
	file.close();
	return 0;
}
	