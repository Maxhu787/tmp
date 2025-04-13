//hspc pa
#include <bits/stdc++.h>
using namespace std;
#define ILikeLoli ios_base::sync_with_stdio(0);
#define LoliSoCute cin.tie(0); cout.tie(0);
#define ll long long
#define int ll
#define pii pair<int, int>
#define f first
#define s second
const int mxn = 5e5 + 3;
const int p = 1e9 + 7;
int n, k, buf1, buf2, buf3, tot = 0;
pii arr[mxn];

int bin(int tg){
    int l = 0, r = k + 1, mid;
    while(r != l){
        mid = l + r >> 1;
        //cout<<mid<<' '<<l<<' '<<r<<" mid\n";
        if(arr[mid].f <= tg){
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    //cout<<l - 1<<'\n';
    return l - 1;
}

void out(){
    for(int i = 0; i <= k; i++){
        cout<<arr[i].f<<" \n"[i == k];
    }
    for(int i = 0; i <= k; i++){
        cout<<arr[i].s<<" \n"[i == k];
    }
}

signed main(){
    ILikeLoli LoliSoCute
    cin>>n>>k;
    for(int i = 1; i <= k; i++){
        cin>>buf1>>buf2>>buf3;
        arr[i].f = buf1;
        arr[i].s = ((buf3 - buf2 + 1) * buf1) % p;
        
    }
    sort(arr, arr + k + 1);
    for(int i = 1; i <= k; i++){
        arr[i].s = (arr[i - 1].s + arr[i].s) % p;
    }
    cin>>buf3;
    //out();
    while(buf3--){
        cin>>buf1;
        tot = ((arr[k].s - arr[bin(buf1)].s + p) % p + tot) % p;
    }
    cout<<tot;
    
    return 0;
}
/*
*/