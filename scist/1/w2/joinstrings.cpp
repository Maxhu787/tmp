#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> strings(n);  
    vector<vector<int> > adj(n);
    vector<int> tail(n);

    for (int i = 0; i < n; i++) {
      cin >> strings[i];
      tail[i] = i;
    }

    int idx1, idx2;
    int lastIdx = 0;
    for (int i = 0; i < n - 1; i++) {
      cin >> idx1 >> idx2;
      idx1--; idx2--;

      adj[tail[idx1]].push_back(idx2);

      tail[idx1] = tail[idx2];

      lastIdx = idx1;
    }

    queue<int> q;
    q.push(lastIdx);
    while (!q.empty()) {
      int current = q.front();
      q.pop();
      cout << strings[current];
      for (int i = 0; i < adj[current].size(); i++) {
        q.push(adj[current][i]);
      }
    }
    cout << '\n';

    return 0;
}
