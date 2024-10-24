#include <iostream>
#include <math.h>
#include <string>
using namespace::std;

int chis(char x){
    int otv;
    if ((int(x) >= 48) and (int(x) <= 57)){
        otv = int(x) - 48;
        return(otv);
    }
    if ((int(x) >= 65) and (int(x) <= 90)){
        otv = int(x) - 55;
        return(otv);
    }
}

char buk(int x){
    char otv;
    if ((x >= 0) and (x <= 9)){
        otv = x + 48;
        return(otv);
    }
    if (x >= 10){
        otv = x + 55;
        return(otv);
    }
}


int main(){
    setlocale(LC_ALL, "ru");
    int step, sum = 0, ss1, ss2, i;
    bool ver = true;
    string str;
    cin >> str >> ss1 >> ss2;
    step = 1;
    for (i = str.size() - 1; i >= 0; i--){
        if (ss1 <= chis(str[i])){
            ver = false;
        }
        sum += chis(str[i]) * step;
        step = step * ss1;
    }
    if (not(ss2 < 1)){
        if (ss2 != 1){
            str = "";
            while (sum > 0){
                str += buk(sum % ss2);
                sum /= ss2;
            }
            if (ver == false){
                cout << "Неправильное число или система счисления!" << endl;
            }
            else{
                for (i = str.size(); i >= 0; i--){
                    cout << str[i];
                }
            }
        }
        else for (i = 0; i < sum; i++){
            cout << "1";
        }
    }
    else cout << "Неправильная система";
}
