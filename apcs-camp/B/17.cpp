#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (n % k == 0) {
        cout << "YES\n";
        return 0;
    }

    long long temp = n;
    while (temp > 0) {
        if (temp % 10 == k) {
            cout << "YES\n";
            return 0;
        }
        temp /= 10;
    }

    cout << "NO\n";
    return 0;
}
