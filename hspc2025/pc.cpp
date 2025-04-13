//hspc pc
#include <bits/stdc++.h>
using namespace std;
#define ILikeLoli ios_base::sync_with_stdio(0);
#define LoliSoCute cin.tie(0); cout.tie(0);
#define ll long long
#define int ll
#define pii pair<int, int>
#define f first
#define s second
const int mxn = 2e5 + 3;
pii buf[mxn];
int n, buf1, buf2, tot = 0, nw = 0;

signed main(){
    ILikeLoli LoliSoCute
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>buf1>>buf2;
        buf[i * 2].f = buf1;
        buf[i * 2].s = 1;
        buf[i * 2 + 1].f = buf2;
        buf[i * 2 + 1].s = -1;
    }
    sort(buf, buf + n * 2);
    nw = buf[0].s;
    for(int i = 1; i < n * 2; i++){
        tot += nw * nw * (buf[i].f - buf[i - 1].f);
        nw += buf[i].s;
    }
    cout<<tot<<'\n';
    
    return 0;
}
/*
*/