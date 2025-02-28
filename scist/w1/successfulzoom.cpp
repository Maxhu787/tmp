#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int i = 1;

  while(i <= n/2) {
    int prev = -1;
    bool sss = true;
    for(int j = i-1; j < n; j+=i) {
      if(prev != -1) {
        if(a[j] <= prev) {
          sss=false;
          break;
        }
      }
      prev = a[j];
    }
    if(sss) {
      cout << i << "\n";
      return 0;
    }
    i++;
  }
  cout << "ABORT!" << "\n";

  return 0;
}