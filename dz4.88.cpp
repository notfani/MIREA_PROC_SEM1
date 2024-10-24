#include <iostream>
#include <math.h>
#include <string>
using namespace::std;

int main()
{
    setlocale(LC_ALL, "ru");
    int i, j;
    double A[3][4];
    double B[4][2];
    double C[3][2];
    float maxv = 0, minv = 100, maxc = 0, minc = 1000, sumv = 0, sumc = 0, chis1 = 0, chis2 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, sumvse = 0;
    A[0][0] = 5;
    A[0][1] = 2;
    A[0][2] = 0;
    A[0][3] = 10;

    A[1][0] = 3;
    A[1][1] = 5;
    A[1][2] = 2;
    A[1][3] = 5;

    A[2][0] = 20;
    A[2][1] = 0;
    A[2][2] = 0;
    A[2][3] = 0;

    B[0][0] = 1.20;
    B[0][1] = 0.50;

    B[1][0] = 2.80;
    B[1][1] = 0.40;

    B[2][0] = 5.00;
    B[2][1] = 1.00;

    B[3][0] = 2.00;
    B[3][1] = 1.50;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            chis1 += A[i][j] * B[j][0];
            chis2 += A[i][j] * B[j][1];
        }
        C[i][0] = chis1;
        C[i][1] = chis2;
        chis1 = 0;
        chis2 = 0;
    }
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


    cout << "Больше всего получил с продаж - " << num1 + 1 << endl << "А вот меньше всех - " << num2 + 1 << endl << "Вот он больше фиксирует прибыль - " << num3 + 1 << endl << "А он меньше всех, благородно - " << num4 + 1 << endl << "Вот столько залутали денег - " << sumv << endl << "А вот скока на дурачках подняли спекулянты - " << sumc << endl << "Всего прошло через руки - " << sumvse << endl;
    system("Pause");
}