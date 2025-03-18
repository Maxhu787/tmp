#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for(int &i : a) cin >> i;
  sort(a.begin(), a.end());

  int count = 0;
  bool consecutive = false;
  cout << a[0];
  for(int i = 1; i < n; i++) {
    if(a[i] == a[i-1] + 1) {
      consecutive = true;
      count++;
    } else {
      if(consecutive) {
        if(count >= 2) cout << "-" << a[i-1];
        else cout << " " << a[i-1];
      }
      cout << " " << a[i];
      count = 0;
      consecutive = false;
    }
  }
  if(consecutive) {
    if(count >= 2) cout << "-" << a[n-1];
    else cout << " " << a[n-1];
  }
  cout << "\n";
  return 0;
}