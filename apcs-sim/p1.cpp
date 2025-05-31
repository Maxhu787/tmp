#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

int length = 0;
void solve() {
  int t;
  cin >> t;

  vector<int> a;
  while(t > 0) {
    a.push_back(t % 2);
    t /= 2;
  }
  while (a.size() < length) a.push_back(0);
  reverse(a.begin(), a.end());
  
  vector<int> res;
  while (!a.empty()) {
    int l = (int)a.size();
    int take = (l + 1) / 2;
    int val = 0;
    for (int i = 0; i < take; i++) {
      val = val * 2 + a[i];
    }
    res.push_back(val);
    a.erase(a.begin(), a.begin() + take);
  }

  for (int i = 0; i < res.size(); i++) cout << res[i] << " "[i == res.size()-1];
  cout << "\n";
};

int main() {
  OK LOL
  int u, n;
  cin >> u >> n;

  while(u > 0) {
    u /= 2;
    length++;
  }
  length--;

  while(n--) {
    solve();
  }
  return 0;
}