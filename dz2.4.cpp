#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");
	double N, n;
	cout << "¬ведите N ";
	cin >> N;
	if (N < 0)
		N = 0;
	else if (N > 0 && N < 1)
		N = 0;
	n = N;
	while (n < N + 10) {
		n++;
		cout << round(n) << endl;
	}
	return 0;
}