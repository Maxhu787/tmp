#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  /*
          12, 15
(15 % 12) 3, 12
          0, 3
  */
 
  ll a, b, tmp;
  while(cin >> a >> b) { 
    if(a == 0 || b == 0) {
      cout << max(a, b) << "\n";
      break;
    }
    if(a > b) {
      swap(a, b);
    }
    while(a != 0) {
      tmp = a;
      a = b % a;
      b = tmp;
    }
    cout << b << "\n";
  }
  return 0;
}
