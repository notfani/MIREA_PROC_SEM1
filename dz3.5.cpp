#include <iostream>
#include <string>
#include <algorithm>
//#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	string s;
	s = "ABCHDEIHFKDHFHELKIEJVDOSDVUWNM";
	//cin >> s;
	/*ifstream file;
	file.open("C:\\Users\\Богдан\\OneDrive\\Документы\\test 4.txt");
	file >> s;*/
	sort(s.begin(), s.end());
	cout << s << endl;
	return 0;
}