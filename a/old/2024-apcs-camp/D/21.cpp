#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n+1);

  for(int i = 1; i <= n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  if(n % 2 == 0) {
    cout << ((a[n/2] + a[n/2+1])/2) << "\n";
  } else {
    cout << a[n/2+1] << "\n";
  }
  return 0;
}