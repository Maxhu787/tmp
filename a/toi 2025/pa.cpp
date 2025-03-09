// #include<bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;
#define ll long long
//#define int ll
const int mxn = 1e5 + 3;
int tre[mxn * 4], ori[mxn];
int n, k, tot = 0, mp_cnt = 1;
map<int, int> mp;
void seg_tree_mod(int l, int r, int x, int id, int num){
    if(l == r){
        tre[id] += num;
        return;
    }
    int mid = l + r >> 1;
    if(mid > x){
        seg_tree_mod(l, mid, x, id << 1, num);
    } else {
        seg_tree_mod(mid + 1, r, x, id << 1 | 1, num);
    }
    tre[id] = max(tre[id << 1], tre[id << 1 | 1]);
}
//上三個優化，把O(nk)壓到O(nlogn)
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        cin>>ori[i];
        if(mp[ori[i]] == 0){//離散化中的re-label，因為不可能真的開將2^30的線段數(其實可以，但我懶(動態開點))
            mp[ori[i]] = mp_cnt++;
        }
    }
    for(int i = 0; i < k; i++){
        seg_tree_mod(1, n, mp[ori[i]], 1, ori[i]);//線段樹，用來降低區域內查詢最大值時間(O(k)壓到O(log n))
    }
    tot = tre[1];
    for(int i = 0; i < n - k; i++){//滑動視窗sliding-window，可以將O(nk)壓到O(n)
        seg_tree_mod(1, n, mp[ori[i]], 1, -ori[i]);
        seg_tree_mod(1, n, mp[ori[i + k]], 1, ori[i + k]);
        tot += tre[1];
    }
    cout<<tot;

    return 0;
}
/*
8 5
4 5 3 2 4 2 2 5
*/