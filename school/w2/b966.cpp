#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  int t=n;
  vector<pair<int, int>> a;
  while(t--) {
    int l, r;
    cin >> l >> r;
    a.push_back({l, r});
  }

  sort(a.begin(), a.end());

  int o=0;
  int prevL=a[0].first, prevR=a[0].second;
  for(int i = 1; i < n; i++) {
    if(a[i].first <= prevR) {
      prevR = max(prevR, a[i].second);
    } else {
      o += prevR - prevL;
      prevL = a[i].first;
      prevR = a[i].second;
    }
  }
  o += prevR - prevL;
  cout << o << "\n";
}



/*

(1, 2) (4, 8) (5, 6) (7, 9)

*/ 