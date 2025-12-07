#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
using namespace std;

int main() {
  cin.tie(0);ios::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pair<int, int>> a(n), okk;
  for(auto &i : a) cin >> i.first >> i.second;

  sort(a.begin(), a.end());
  int o = 0;
  stack<pair<int, int>> oo;
  for(int i = 0; i < n; i++) {
    oo.push({a[i].first, a[i].second});
    if(i != 0 && a[i].first == a[i-1].first && a[i].second == a[i-1].second) {
      a[i].first = -1;
      a[i].second = -1;
      o+=2;
      oo.pop();
      oo.pop();
    }
  }

  while(!oo.empty()) {
    auto i = oo.top();
    okk.push_back({i.first, i.second});
    oo.pop();
   }  
   sort(okk.begin(), okk.end());
   for(int i = 1; i < okk.size(); i++) {
    if(okk[i].first == okk[i-1].first) {
      okk[i].first = -1;
      o++;
    }
   }
   cout << o << "\n";
  return 0;
}

/*

1 1

1 2 -
1 2 -

1 3 =
1 4 =

2 3 -
2 3 -

2 4

3 4 -
3 4 -

*/