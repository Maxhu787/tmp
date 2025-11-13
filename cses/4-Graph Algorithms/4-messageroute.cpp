#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int mxn = 1e5;
vector<int> adj[mxn];
vector<bool> used(mxn);
vector<int> parent(mxn);

int main() {
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  queue<int> q;
  used[0] = true;
  q.push(0);
  parent[0] = -1;
  while(!q.empty()) {
    int u = q.front();
    q.pop();
    for(int i : adj[u]) {
      if(!used[i]) {
        used[i] = true;
        q.push(i);
        parent[i] = u;
      }
    }
  }

  if(!used[n-1]) {
    cout << "IMPOSSIBLE\n";
  } else {
    vector<int> o;
    for(int curr = n-1; curr != -1; curr = parent[curr]) {
      o.push_back(curr);
    }
    reverse(o.begin(), o.end());
    int t = o.size();
    cout << t << "\n";
    for(int i = 0; i < t; i++) {
      cout << o[i]+1 << (i != t-1 ? " " : "\n");
    }
  }
  return 0;
}