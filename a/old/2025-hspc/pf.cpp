//hspc pf
#include <bits/stdc++.h>
using namespace std;
#define ILikeLoli ios_base::sync_with_stdio(0);
#define LoliSoCute cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
const int mxn = 1e7 + 3;
int dsu[mxn][2], dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
vector<char> ori[mxn];
int n, m, mx = 1, buf1, buf2, q;
char bufc;
inline int posi(int i, int j){
    return m * i + j;
}

int fin(int u){
    return dsu[u][0] == u? u: dsu[u][0] = fin(dsu[u][0]);
}

void che(int x, int y){
    for(int i = 0; i < 4; i++){
        int ii = x + dir[i][0], jj = y + dir[i][1];
        if(0 <= ii && ii < n){
            if(0 <= jj && jj < m){
                if(ori[ii][jj] == ori[x][y] && ori[x][y] == '@'){
                    int a = fin(posi(ii, jj)), b = fin(posi(x, y));
                    if(a == b){
                        continue;
                    }
                    dsu[b][1] += dsu[a][1];
                    dsu[a][0] = b;
                    mx = max(mx, dsu[b][1]);
                }
            }
        }
    }
}
void cheee(int x, int y){
    for(int i = 0; i < 2; i++){
        int ii = x + dir[i][0], jj = y + dir[i][1];
        if(0 <= ii && ii < n){
            if(0 <= jj && jj < m){
                if(ori[ii][jj] == ori[x][y] && ori[x][y] == '@'){
                    int a = fin(posi(ii, jj)), b = fin(posi(x, y));
                    if(a == b){
                        continue;
                    }
                    dsu[b][1] += dsu[a][1];
                    dsu[a][0] = b;
                    mx = max(mx, dsu[b][1]);
                }
            }
        }
    }
}

// void out(){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cout<<dsu[posi(i, j)][0]<<" \n"[j == m - 1];
//         }
//     }
//     cout<<'\n';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cout<<dsu[posi(i, j)][2]<<" \n"[j == m - 1];
//         }
//     }
// }

signed main(){
    ILikeLoli LoliSoCute
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>bufc;
            ori[i].push_back(bufc);
            dsu[posi(i, j)][1] = 1;
            dsu[posi(i, j)][0] = posi(i, j);
            cheee(i, j);
        }
    }
    cin>>q;
    while(q--){
        cin>>buf1>>buf2;
        if(ori[buf1][buf2] != '@'){
            ori[buf1][buf2] = '@';
            che(buf1, buf2);
        }
        //out();
        cout<<mx<<'\n';
    }
    
    return 0;
}
/*
*/