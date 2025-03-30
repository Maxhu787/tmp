#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  bool hasZero = false;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] == 0) hasZero = true;
  }
  if(hasZero) {
    cout << n << "\n";
    return 0;
  }
  if(k == 0) {
    cout << 0 << "\n";
    return 0;
  }
  int left = 0, o=0;
  long long current = 1;
  for(int right = 0; right < n; right++) {
    current *= a[right];

    while(left <= right && current > k) {
      current /= a[left];
      left++;
    }
    o = max(o, right - left + 1);
  }

  cout << o << "\n";


  return 0;
}

/*
keep increasing right pointer,

is current sum gets bigger then k,
shrink left and divide current

else if curr sum is smaller then k,
increase o

*/
