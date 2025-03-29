#include <iostream>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    int count = 1;
    char prev = a[0];
    for(int i = 1; i < a.length(); i++) {
        if(a[i] == prev) {
            count++;
            if(count >= 7) {
                cout << "YES" << "\n";
                return 0;
            }
        } else {
            prev = a[i];
            count = 1;
        }
    }
    cout << "NO" << "\n";
    return 0;

}
