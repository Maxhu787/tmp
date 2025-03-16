#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> a(t);
    
    for (int &i : a) cin >> i;
    
    sort(a.begin(), a.end());
    
    int best_fail = -1;
    int worst_pass = INT_MAX;
    
    for (int i : a) {
        if (i < 60) {
            best_fail = i;
        } else if (i >= 60 && worst_pass == INT_MAX) {
            worst_pass = i;
        }
    }
    
    for (int i = 0; i < t; i++) {
        cout << a[i];
        if (i != t - 1) cout << " ";
    }
    cout << "\n";
    
    if (best_fail == -1) {
        cout << "best case\n";
    } else {
        cout << best_fail << "\n";
    }
    
    if (worst_pass == INT_MAX) {
        cout << "worst case\n";
    } else {
        cout << worst_pass << "\n";
    }
    
    return 0;
}
