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
map<char, int> optionss = {{0, 'A'}, {1, 'U'}, {2, 'C'}, {3, 'G'}};
int dp[mxn][mxm][4];
int n, m, root;

void dfs(int current, int index) {
  for(int i : child[current]) {
    dfs(i, index);
  }
  int tot = 0;
  for(int i : child[current]) {
    int temp = INF, curr;
    for(int j = 0; j < 4; j++) {
      if(dp[i][index][j] < temp) {
        temp = dp[i][index][j];
        curr = j;
      }
    }
    if(value[i][index] == '@') {
      value[i][index] = optionss[curr];
      // !
    }
    tot += temp;
  }

  if(value[current][index] == '@') {
    for(int i = 0; i < 4; i++) {
      int dis = 0;
      for(int j : child[current]) {
        if(value[j][index] == '@') {
          ;
          // !
        } else {
          if(options[value[j][index]] != i) dis++;
        }
      }
      dp[current][index][i] = tot + dis;
    }
  } else {
    for(int i = 0; i < 4; i++) {
      if(options[value[current][index]] == i) {
        dp[current][index][i] = tot;
      } else {
        dp[current][index][i] = INF;
      }
    }
  }
  // cout << value[current] << " " << tot << ": " << dp[current][index][0] << " " << dp[current][index][1] << " " << dp[current][index][2] << " " << dp[current][index][3] << "\n";
}

int main() {
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    int bufa, bufb;
    string s;
    cin >> bufa >> bufb >> s;
    if(bufa == bufb) {
      root = bufa;
    } else {
      child[bufb].push_back(bufa);
    }
    value[bufa] = s;
  }

  cout << "---\n";
  for(int i = 0; i < m; i++) {
    dfs(root, i);
  }
  
  int oo = 0;
  for(int i = 0; i < m; i++) {
    // cout << value[root][i] << ": ";
    // for(int j = 0; j < 4; j++) {
    //   cout << dp[root][i][j] << " ";
    // }
    // cout << "\n";
    if(value[root][i] == '@') {
      int o = INF;
      for(int j = 0; j < 4; j++) {
        int tot = 0;
        for(int c : child[root]) {
          if(options[value[c][i]] != j) tot++;
        }
        o = min(o, tot);
      }
      oo += o;
      cout << o << "-\n";
    } else {
      int o = 0;
      for(int c : child[root]) {
        // if(options[value[c][i]] != options[value[root][i]]) o++;
        cout << value[c][i] << ", ";
      }
      oo += o;
      cout << o << "-\n";
    }
  }
  // cout << oo << "\n";
  return 0;
}

/*
dp[i][j][k]

when ith node's jth character is k, it achieves a min length of dp[i][j][k]

*/ 