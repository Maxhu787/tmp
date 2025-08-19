#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, bufa, bufb;
const int mxn = 1e6;

vector<int> adj[mxn];
int depth[mxn];

void dfs(int node, int parent) {
  for(int i : adj[node]) {
    if(i == parent) continue;
    depth[i] = depth[node] + 1;
    dfs(i, node);
  }
}

int main() {
  cin >> n;
  for(int i = 1; i < n; i++) {
    cin >> bufa >> bufb;
    adj[bufa].push_back(bufb);
    adj[bufb].push_back(bufa);
  }

  fill(depth, depth+n, 0);
  dfs(0, -1);
  int far = 0;
  for(int i = 0; i < n; i++) {
    if(depth[i] > depth[far]) far = i;
  }

  fill(depth, depth+n, 0);
  dfs(far, -1);
  int o = 0;
  for(int i = 0; i < n; i++) {
    o = max(o, depth[i]);
  }
  cout << o << "\n";
  return 0;
}