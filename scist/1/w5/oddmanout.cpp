#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int t, oddOneOut = 0;
        cin >> t;

        for(int j = 0; j < t; j++) {
            int x;
            cin >> x;
            oddOneOut ^= x;
        }

        cout << "Case #" << i << ": " << oddOneOut << "\n";
    }
    
    return 0;
}
