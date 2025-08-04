#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for(int &i : a) cin >> i;

  int o=0;
  map<int, int> seen;
  int left = 0;
  for(int right = 0; right < n; right++) {
    if(seen[a[right]] != 0) {
      while(seen[a[right]] > 0) {
        seen[a[left]]--;
        left++;
      }
    }
    seen[a[right]]++;
    o = max(o, right - left + 1);
  }
  cout << o << "\n";
  return 0;
}