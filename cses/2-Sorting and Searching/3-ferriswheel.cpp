#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int l=0, r=n-1, o=0;
  while(l != r && l < r) {
    if(a[l] + a[r] <= x) {
      l++;r--;
      o++;
    } else {
      r--;
      o++;
    }
  }
  if(l <= r) o++;
  cout << o << "\n";
  return 0;
}

/*

2 3 7 9
^     ^
left and right pointer,
if left + right <= limit, move left and right by one to the middle, add one to output
else bigger, then subtract from right pointer, and add one to output

in the output part, if left is smaller than right, that means the last operation is subtract from left and right pointer by one,
making them pass each other, making left bigger than right, so we dont add one to answer; else, add one to answer (dont ask me why, its by observation)

*/