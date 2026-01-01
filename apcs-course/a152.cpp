#include <iostream>
using namespace std;

const int mxn = 1e4+1;
int n, x;
int a[mxn];

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> x;

  int l = 0, r = n-1, mid;
  int count = 0;
  while(l <= r) {
    mid = (l + r) >> 1;
    count++;
    if(a[mid] == x) {
      cout << mid << " " << count << "\n";
      return 0;
    }
    if(a[mid] < x) l = mid+1;
    else r = mid-1;
  }

  cout << "not found " << count << "\n";
  return 0;
}
