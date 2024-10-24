#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "ru");
	int M, M1, p3, p4;
	float Ms;
	cin >> Ms;
	if ((Ms >= 0) and (floor(Ms) == Ms)){
		M = Ms;
		if (M < 3){
			p3 = 0;
			p4 = 0;
		}
		else if (M % 4 == 0){
			p4 = M / 4;;
			p3 = 0;
		}
		else if (M % 3 == 0){
			p3 = M / 3;
			p4 = 0;
		}
		else
		{
			if (M % 3 == 2){
				M1 = M - ((M / 3) - 2);
				p3 = (M / 3) - 2;
				p4 = M1 / 4;
			}
			if (M % 3 == 1){
				M1 = M - ((M / 3) - 1);
				p3 = (M / 3) - 1;
				p4 = (M1 / 4) - 1;
			}
			if (M % 4 == 3){
				p3 = 1;
				p4 = M1 / 4;
			}
			if (M % 4 == 2){
				p3 = 2;
				p4 = (M / 4) - 1;
			}
			if (M % 4 == 1){
				p3 = 3;
				p4 = (M1 / 4) - 2;
			}
		}
		cout << p3 << endl << p4;
	}
	else{
		cout << "Неправильно введено число или нецелое число лопастей";
	}
}