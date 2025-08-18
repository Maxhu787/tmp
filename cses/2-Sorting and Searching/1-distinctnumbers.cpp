#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s.insert(t);
    }
    int o = 0;

    for(int i : s) o++;
    cout << o << "\n";

    return 0;
}

// count unique numbers
// use set to solve