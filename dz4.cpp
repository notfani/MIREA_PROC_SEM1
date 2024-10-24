#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "ru");
	int N = 1, i, j, chis = 1, num, otv = 0, schet = 0, max = 0, pos = 0;
	int massA[3][18], massB[3][18];
	for (j = 0; j < 18; j++){
		massA[0][j] = chis;
		chis++;
		massA[1][j] = chis;
		chis++;
	}
	chis = 53;
	for (j = 0; j < 18; j += 2){
		massA[2][j] = chis;
		chis++;
		massA[2][j + 1] = chis;
		chis -= 3;
	}

	for (i = 0; i < 3; i++){
		for (j = 0; j < 18; j++){
			massB[i][j] = 0;
		}
	}

	for (i = 0; i < 2; i++){
		for (j = 0; j < 18; j++){
			cout << massA[i][j] << " ";
		}
		cout << endl;
	}

	for (j = 0; j < 18; j++){
		cout << massA[2][j] << " ";
	}
	cout << endl;

	while (N != 0){
		cin >> N;
		if ((N >= 0) and (N < 55)){
			for (i = 0; i < 3; i++){
				for (j = 0; j < 18; j++){
					if (massA[i][j] == N) {
						if (massB[i][j] == 0) {
							massB[i][j] = N;
						}
						else {
							cout << "ERROR";
							return 0;
						}
					}
				}
			}
		}
		else{
			cout << "“акого места нет,напишите другое или напишите 0" << endl;
		}
	}

	for (i = 0; i < 2; i++){
		for (j = 0; j < 18; j++){
			cout << massA[i][j] << " ";
		}
		cout << endl;
	}

	for (j = 0; j < 18; j++){
		cout << massA[2][j] << " ";
	}
	cout << endl << endl;

	for (i = 0; i < 3; i++){
		for (j = 0; j < 18; j++){
			cout << massB[i][j] << " ";
		}
		cout << endl;
	}

	j = 0;
	for (i = 0; i < 9; i++){
		if ((massB[0][j] == 0) or (massB[0][j + 1] == 0)
			or (massB[1][j] == 0) or (massB[1][j + 1] == 0) or
			(massB[2][j] == 0) or (massB[2][j + 1] == 0)){
			if (schet > max){
				max = schet;
				pos++;
			}
			schet = 0;
			j += 2;
		}
		else{
			schet++;
			j += 2;
		}
	}
	if (schet > max){
		max = schet;
		pos++;
	}
	cout << endl << max << endl;
}