#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int mxn = 1e3+1;
vector<int> child[mxn];
vector<string> value(mxn);
vector<char> options = {'A', 'U', 'C', 'G'};
int n, m, o=0;

void dfs(int current, int parent) {
  char c;
  int check;
  for(char c : options) {
  }
  // for(int i : child[current]) {
  //   dfs(i, value[i]);
  // }
}

int main() {
  cin >> n >> m;
  int top;
  for(int i = 0; i < n; i++) {
    int bufa, bufb;
    string s;
    cin >> bufa >> bufb >> s;
    if(bufa == bufb) {
      top = bufa;
    }
    child[bufb].push_back(bufa);
    value[bufa] = s;
  }

  dfs(top, top);
  return 0;
}
