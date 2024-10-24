#include <iostream>
#include <math.h>

void main() {
	int i, j, k;
    float maxv = 0, minv = 100, maxc = 0, minc = 1000, sumv = 0, sumc = 0, chis1 = 0, chis2 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, sumvse = 0;
	//double maxsum = 0, minsum = 1000000000, maxcom = 0, mincom = 10000000000;
	//double maxindex = 0, minindex = 0, maxcomindex = 0, mincomindex = 0, totalsum = 0, totalcom = 0, totalres = 0;
	using namespace std;
	setlocale(LC_ALL, "Ru");
	double A[3][4] = { {5,2,0,10},{3,5,2,5},{20,0,0,0} };
	double B[4][2] = { {1.2,0.5},{2.8,0.4},{5.0,1.0},{2.0,1.5} };
	double C[3][2] = { {0,0},{0,0},{0,0} };
	/*for (i = 0; i < 4; i++) {
		C[i][0] += A[0][i] * B[i][0];
		C[i][1] += A[1][i] * B[i][1];
	}
	for (i = 0; i < 3; i++) {
		if (C[i][1] > maxsum) {
			maxsum = C[i][1];
			maxindex = i;
		}
		else if (C[i][1] < minsum) {
			minsum = C[i][1];
			minindex = i;
		}
		else if (C[i][2] > maxcom) {
			maxcom = C[i][2];
			maxcomindex = i;
		}
		else if (C[i][2] < mincom) {
			mincom = C[i][2];
			mincomindex = i;
		}
		totalsum += C[i][0];
		totalcom += C[i][1];
		totalres += totalcom + totalsum;
	}
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
            chis1 += A[i][j] * B[j][0];
            chis2 += A[i][j] * B[j][1];
        }
        cout << endl;
        C[i][0] = chis1;
        C[i][1] = chis2;
        chis1 = 0;
        chis2 = 0;
    }
    cout << endl;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;*/

    for (i = 0; i < 3; i++)
    {
        if (C[i][0] > maxv)
        {
            maxv = C[i][0];
            num1 = i;
        }
        sumv += C[i][0];
        if (C[i][0] < minv)
        {
            minv = C[i][0];
            num2 = i;
        }
    }


    for (i = 0; i < 3; i++)
    {
        if (C[i][1] > maxc)
        {
            maxc = C[i][1];
            num3 = i;
        }
        sumc += C[i][1];
        if (C[i][1] < minc)
        {
            minc = C[i][1];
            num4 = i;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sumvse += C[i][j];
        }
    }
	cout << "Больше всего денег с продажи выручил: " << num1 + 1 << endl;
    cout << "Меньше всего денег с продажи выручил: " << num2 + 1 << endl;
    cout << "Наибольшие комиссионные плучил: " << num3 + 1 << endl;
    cout << "Наименьшие комиссионные плучил: " << num4 + 1 << endl;
    cout << "Общая сумма равна: " << sumv << endl;
    cout << "Общая сумма коммисионных равнва: " << sumc << endl;
    cout << "Общая сумма денег, прошедших через руки продавцов равна: " << sumvse << endl;
 }
