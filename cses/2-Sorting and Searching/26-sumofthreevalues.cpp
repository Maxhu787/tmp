#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<pair<int, int>> a;
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    a.push_back({t, i+1});
  }

  sort(a.begin(), a.end());

  for(int i = 0; i < n-2; i++) {
    int left = i+1, right = n-1;
    while(left < right) {
      int s = a[i].first + a[left].first + a[right].first;
      if(s == x) {
        cout << a[i].second << " " << a[left].second << " " << a[right].second << "\n";
        return 0;
      } else if(s < x) {
        left++;
      } else {
        right--;
      }
    }
  }
  cout << "IMPOSSIBLE" << "\n";

  return 0;
}