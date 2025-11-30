#include <iostream>
using namespace std;

int main() {
    double N;
    cin >> N;
    
    if (N >= 90) cout << "S";
    else if (N >= 80) cout << "A";
    else if (N >= 70) cout << "B";
    else if (N >= 60) cout << "C";
    else if (N >= 50) cout << "D";
    else if (N >= 40) cout << "E";
    else cout << "F";

    return 0;
}
