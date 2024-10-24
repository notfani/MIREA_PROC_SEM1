#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int i;
    char buk;
    ifstream file;
    file.open("C:\\Users\\Богдан\\OneDrive\\Документы\\test 3.txt");
    while (!file.eof())
    {
        file >> buk;
        i = int(buk);
        if ((i >= 48) and (i <= 57))
        {
            cout << buk;
        }
    };
    file.close();
}