//hspc pg wa
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ILikeLoli ios_base::sync_with_stdio(0);
#define LoliSoCute cin.tie(0); cout.tie(0);
#define ll long long
#define int ll
#define pii pair<int, int>
#define f first
#define s second
const int mxn = 2e5 + 3;
int n, m, tot = 0;
struct nod{
    int a, b, sex;
}nd[mxn];
deque<nod> con_bo, con_gr;
bool che(nod aa, nod bb){
    return n * (bb.a - aa.a) >= aa.b * bb.a - aa.a * bb.b;
}

signed main(){
    ILikeLoli LoliSoCute
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>nd[i].a>>nd[i].b>>nd[i].sex;
    }
    sort(nd, nd + m, [](nod aa, nod bb){
        if(aa.b == bb.b){
            return aa.a < bb.a;
        } else {
            return aa.b > bb.b;
        }
    });
    for(int i = 0; i < m; i++){
        if(nd[i].sex == 1){
            while(con_bo.size() > 0 && che(con_bo.back(), nd[i])){
                con_bo.pop_back();
            }
            con_bo.push_back(nd[i]);
        } else {
            while(con_gr.size() > 0 && che(con_gr.back(), nd[i])){
                con_gr.pop_back();
            }
            con_gr.push_back(nd[i]);
        }
        
    }
    tot += con_bo.size();
    tot += con_gr.size();
    cout<<tot;
    return 0;
}
/*
*/