#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, prev;
    cin >> n >> prev;

    int current = 1, o = 1;
    for(int i = 1; i < n; i++) {
        int t;
        cin >> t;
        if(t >= prev) {
            current++;
            o = max(o, current);
        } else {
            current=1;
        }
        prev = t;
    }

    cout << o << "\n";
    return 0;
}
