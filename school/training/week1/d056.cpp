#include <iostream>
using namespace std;

const int mxn = 1e6+1;
int a[mxn], b[mxn];

int main() {
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0) cout << "\n";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
      cin >> a[i] >> b[i];
    } 
    bool carry = false;
    for(int i = n-1; i >= 0; i--) {
      int d = a[i] + b[i];
      if(carry) d++;
      a[i] = d % 10;

      if(d >= 10) {
        carry = true;
      } else {
        carry = false;
      }
    }
    for(int i = 0; i < n; i++) cout << a[i];
    cout << "\n";
  }
  return 0;
}