#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  long long k;
  cin >> n >> k;

  vector<int> a(n);
  for(int &i : a) cin >> i;

  long long o=0, current=0;
  int left=0, right=0;

  while(right < n) {
    current += a[right];

    while(current >= k) {
      o += (n-right);
      current -= a[left];
      left++;
    }
    right++;
  }

  cout << o << "\n";
  return 0;
}

/*
start from index 0, expands to the right until sum is greater then x
then start shrinking from the left until it is smaller then x, in the process updaiting o
if while shrinking it gets smaller then x, we increase right
*/