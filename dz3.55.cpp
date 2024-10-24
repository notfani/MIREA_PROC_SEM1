#include <iostream>
#include <fstream>

using namespace std;
int main(){
    setlocale(LC_ALL, "ru");
    char z;
    int i, j;
    ifstream file;
    file.open("C:\\Users\\Богдан\\OneDrive\\Документы\\test 4.txt");
    string s;
    file >> s;
    for (i = 0; i <= s.size() - 1; i++){
        for (j = 0; j <= i - 1; j++){
            if ((int(s[i]) < int(s[j])) and (i != j)){
                z = s[i];
                s[i] = s[j];
                s[j] = z;
            };
        }
        for (j = i + 1; j <= s.size() - 1; j++){
            if ((int(s[i]) < int(s[j])) and (i != j)){
                z = s[i];
                s[i] = s[j];
                s[j] = z;
            };
        };
    };
    cout << s;
}