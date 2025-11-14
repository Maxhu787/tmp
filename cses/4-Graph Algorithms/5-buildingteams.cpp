#include <iostream>
#include <vector>
using namespace std;

const int mxn = 1e5;
vector<int> adj[mxn];
int team[mxn], visited[mxn];
bool o = true;

void dfs(int x, int curr) {
  for(auto i : adj[x]) {
    if(!visited[i]) {
      visited[i] = 1;
      team[i] = !curr;
      dfs(i, !curr);
    } else {
      if(team[i] == curr) {
        o = false;
      }
    }
  }
}

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

  for(int i = 0; i < n; i++) {
    if(!visited[i]) {
      dfs(i, 1);
    }
  }

  if(!o) {
    cout << "IMPOSSIBLE\n";
    return 0;
  }
  for(int i = 0; i < n; i++) {
    cout << !team[i]+1 << (i != n-1 ? " " : "\n");
  }

  return 0;
}
