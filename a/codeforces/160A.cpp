#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int o = 0;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a[i] = t;
        o += t;
    }    

    sort(a.rbegin(), a.rend());
    int current = 0;
    for(int i = 0; i < n; i++) {
        current += a[i];
        o -= a[i];
        if(current > o) {
            cout << i + 1 << "\n";
            return 0;
        }
    }
    return 0;
}
