#include <iostream>
#include <vector>
#include <utility>
using namespace std;

const int mxn = 1e5 + 5;

int N, M;
bool visited[mxn];
vector<int> adj[mxn];
vector<pair<int, int>> o;

void dfs(int s) {
  if(visited[s]) return;
  visited[s] = true;

  for(auto u : adj[s]) {
    dfs(u);
  }
}

int main() {
  cin >> N >> M;

  for(int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a); 
  }

  dfs(1);

  for(int i = 1; i <= N; i++) {
    if(!visited[i]) {
      adj[1].push_back(i);
      adj[i].push_back(1);
      o.push_back({1, i});
      dfs(i);
    }
  }
  
  cout << o.size() << "\n";
  for(auto i : o) {
    cout << i.first << " " << i.second << "\n";
  }
  return 0;
}