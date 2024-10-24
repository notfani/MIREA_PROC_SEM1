#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int N, pos = 0, sl = 0, sp = 0, j, d = 0, maxd = 0, i;
	float K;
	cin >> N >> K;
	K = floor(K);
	if (N < K){
		cout << "Людей больше,чем мест" << endl;
	}
	else if (N == K){
		cout << "0 " << "0" << endl;
	}
	else if (N < 0){
		cout << "Мест не может быть отрицательное колличсетво" << endl;
	}
	else if (K <= 0){
		cout << "На сходку никто не пришёл:(" << endl;
	}
	else{
		vector <int> a(N + 2, 0);
		a.front() = 1;
		a.back() = 1;
		for (i = 0; i < a.size(); i++){
			cout << a[i] << " ";
		}
		cout << endl;
		for (j = 0; j < K; j++){
			maxd = 0;
			for (i = 0; i < N - 1; i++){
				while (a[i] == 0){
					d++;
					i++;
				}
				if (d > maxd){
					maxd = d;
					pos = i;
				}
				d = 0;
			}
			a[pos - (maxd / 2) - 1] = 1;
		}
		for (i = 0; i < a.size(); i++){
			cout << a[i] << " ";
		}
		cout << endl;
		i = pos - (maxd / 2) - 1;
		while (a[i - 1] == 0){
			sl++;
			i--;
		}
		i = pos - (maxd / 2) - 1;
		while (a[i + 1] == 0){
			sp++;
			i++;
		}
		if (sp < sl){
			cout << sp << endl << sl;
		}
		if (sp >= sl){
			cout << sl << endl << sp;
		}
	}


}
