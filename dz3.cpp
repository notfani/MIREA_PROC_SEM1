#include <iostream>
using namespace std;

int f(int x){
	int otv=1;
	for (int i = 2;i <= x;i++){
		otv += i;
	}
	return(otv);
}

int main(){
	setlocale(LC_ALL, "ru");
	int M, N,S=0,step=1;
	cin >> N >> M;
	if ((N > 0)and(M > 0)){
		{
			S = f(M) * f(N);
		}
		cout << S;
	}
	else cout << "Геометрия не, не слышал?";
}