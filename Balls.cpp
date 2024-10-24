#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int generate(int t, int n, vector <int> a, int otv){
	if (t == n - 1){
		for (int i = 0; i < n; ++i){
			if (a[i] == i + 1){
				otv++;
				break;
			}
		}


	}
	else{
		for (int j = t; j < n; ++j){
			swap(a[t], a[j]); 
			otv = generate(t + 1, n, a, otv); 
			swap(a[t], a[j]);
		}
	}
	return otv;
}

int otvet(int n, int m){
	int i;
	vector <int> b(n);
	for (i = 0; i < n; i++){
		b[i] = i + 1;
	}
	return(generate(m - 1, n, b, 0));
}

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cin >> n;
	if (n > 0)
	{
		vector <int> mass(n);

		cout << otvet(n, 1);
	}
	else cout << "А как может быть столько шариков?";

}