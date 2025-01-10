#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n = 3;

    int k;
    string s;
    cin >> k;
    vector<string> v;
    for (int i = 0; i < k; i++) {
        cin >> s;
        v.push_back(s);
    }
    
    for (int i = 0; i < v.size(); i++) {
        if (k >= n) {
            cout << k << " " << v[n - 1] << "\n";
            v.erase(v.begin() + (n - 1));
        } else if (k == 1) {
            cout << k << " " << v[0] << "\n";
            v.erase(v.begin());
        } else {
            int temp = n, c = 0;
            while (temp >= k) {
                temp -= k;
                c++;
            }
            cout << k << " " << v[c - 1] << "\n";
            v.erase(v.begin() + (c - 1));
        }
        k--;
    }
}


/*
3
1 1
2 1
*/