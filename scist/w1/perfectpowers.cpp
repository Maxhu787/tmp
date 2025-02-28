#include <iostream>
#include <cmath>
using namespace std;

typedef long double ld;
typedef long long ll;

int main() {
    ld n;
    while (cin >> n && n != 0) {
        bool neg = n < 0;
        n = abs(n);

        for (ll i = sqrt(n) + 1; i >= 1; i--) {
            if (neg && i % 2 == 0) continue;

            ld x = pow(n, 1.0L / i);
            if (abs(x - floor(x)) < .00001L) {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}


/* 
n = x^i
x = n^(1/i)

there cannot be any integer x such that x^i = n for i > sqrt(n)
*/