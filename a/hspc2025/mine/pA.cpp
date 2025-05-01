#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

const long long MOD = 1e9+7;
const long long mxn = 5e5+3;

int main() 
{
    cin.tie(0); ios::sync_with_stdio(0);
    long long n, k;
    cin >> n >> k;
    pair<long long, long long> aaa[mxn];
    for(int i = 1; i <= k; i++) 
    {
        long long a, l, r;
        cin >> a >> l >> r;
        aaa[i].first = a;
        aaa[i].second = ((r - l + 1) * a) % MOD;
    }

    sort(aaa, aaa + k + 1);
    for(int i = 1; i <= k; i++) 
    {
        aaa[i].second = (aaa[i - 1].second + aaa[i].second) % MOD;
    }
    long long q;
    cin >> q;
    long long o = 0;
    while(q--) 
    {
        long long s;
        cin >> s;

        int l = 0, r = k + 1, mid;
        while(r != l)
        {
            mid = l + r >> 1;
            if(aaa[mid].first <= s)
            {
                l = mid + 1;
            } else 
            {
                r = mid;
            }
        }
        int pos = l-1;
        o = ((aaa[k].second - aaa[pos].second + MOD) % MOD + o) % MOD;
    }
    cout << o << "\n";
    return 0;
}

/*

n, k
10 3

a l r
1 2 3
2 4 6
3 6 9

q
3

1
2
3
*/