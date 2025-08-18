#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for(int &i : a) cin >> i;
  for(int i = n-1; i > 0; i--) {
    if(a[i-1] <= a[i]) {
      a[i-1] = a[i]+1;
    }
  }

  for(int i : a) cout << i << " ";
  cout << "\n";

  return 0;
}