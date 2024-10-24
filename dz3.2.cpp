#include <iostream>
#include <math.h>

using namespace std;

int main() {
    setlocale(0, "");
    double m, n, s, p, r, res;
    cin >> s >> m >> n;
    if (s >= 100 && s == m && m == n) {
        cout << "ERROR 404 Not Found";
    }
    else if ((s <= 0) or (m <= 0) or (n <= 0)) {
        cout << "ERROR";
    }
    else if (s / m == n) {
        cout << "0";
    }
    else {
        for (p = 0; p <= 100; p += 0.001) {
            r = p / 100;
            if (r > 1) {
                cout << "Îøèáêà" << endl;
                break;
            }
            res = (s * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
            if (res > m) {
                cout << "p = " << p;
                break;
            }
        }
    }
}