#include <iostream>
#include <set>
#include <string>
using namespace std;

typedef long long ll;

set<int> st[30];

int main() {
    string s;
    cin >> s;
    ll ans = 0;

    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - 'a' + 1;
        ans += st[x].size();
        for (int j = 1; j <= 26; j++) {
            st[j].insert(x);
        }
        st[x].clear();
    }

    cout << ans << endl;
    return 0;
}
