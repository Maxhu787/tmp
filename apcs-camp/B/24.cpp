#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, o;
  cin >> o;
  while(cin >> n && n != 0) {
    if(o % 7 != 0 && n % 7 == 0) {
      o = n;
    }
    if(o % 7 == 0 && n % 7 == 0) {
      if(o % 70 < n % 70) {
        o = n;
      }
    }
    if(o % 7 != 0 && n % 7 != 0) {
      if(o % 77 > n % 77) {
        o = n;
      }
    }
  }
  cout << o << "\n";
  return 0;
}
