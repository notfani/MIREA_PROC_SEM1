#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	float a = 0, b = 0, c = 0, n;
	cin >> a >> b >> c;
	if ((a <= c) and ((a >= 0) and (b >= 0) and (c > 0))){
		if (b > c){
			cout << "1 лопасть стоит дороже максимальной цены?";
		}
		else if (((b == 0) and (a == 0)) and (c != 0)){
			cout << "Прям даром? Бесконечно" << endl;
		}
		else if ((a == 0) and ((b != 0) and (c != 0))){
			cout << "Максимальное число лопастей = " << c / b << endl;
		}
		else{
			n = 1;
			while (n < (c - a) / b){
				n += 1;
			}
			cout << "Максимальное число лопастей = " << n << endl;
		}
	}
	else{
		cout << "Неправильно введены значения" << endl;
	}
	return 1;
}