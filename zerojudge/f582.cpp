#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

const int mxn = 1e3+1, mxm = 80+1, INF=1e9;
vector<int> child[mxn];
vector<string> value(mxn);
map<char, int> options = {{'A', 0}, {'U', 1}, {'C', 2}, {'G', 3}};
int dp[mxn][mxm][4];
int n, m, top;

void dfs(int current) {
  for(int i : child[current]) {
    dfs(i);
  }
  int o = 0;
  for(int i = 0; i < m; i++) {
    int t = INF;
    for(int j = 0; j < 4; j++) {
      int tt = 0;
      for(int c : child[current]) {
        tt += dp[c][i][j];
      }
      t = min(t, tt);
    }
    o += t;
  }

  for(int i = 0; i < m; i++) {
    if(value[current][i] != '@') {
      int letter = options[value[current][i]];
      for(int j = 0; j < 4; j++) {
        if(j == letter) {
          dp[current][i][j] += 0;
        } else {
          dp[current][i][j] += INF;
        }
      }
    } else {
      for(int j = 0; j < 4; j++) {
        dp[current][i][j] += 0;
      }
    }
  }
}

int main() {
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    int bufa, bufb;
    string s;
    cin >> bufa >> bufb >> s;
    if(bufa == bufb) {
      top = bufa;
    } else {
      child[bufb].push_back(bufa);
    }
    value[bufa] = s;
  }

  dfs(top);
  return 0;
}
