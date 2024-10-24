#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");
	double x, y;
	for (x = -4; x <= 4; x += 0.5) {
		if (x != 1) {
			y = (pow(x, 2) - 2 * x + 2) / (x - 1);
			cout << y << endl;
		}	
		else {
			cout << "На 0 делить нельзя";
		}
	}
	return 0;
}