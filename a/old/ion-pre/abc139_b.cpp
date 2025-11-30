#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int soc = 1;
    int o = 0;

    while (soc < b) {
        soc += a - 1;
        o++;
    }

    cout << o << endl;
    return 0;
}
