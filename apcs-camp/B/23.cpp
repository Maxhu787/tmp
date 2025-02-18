#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  ll a, b, tmp;
  // a x b = LCM(a, b) * GCD (a, b)
  while(cin >> a >> b) { 
    ll oa = a, ob = b;
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
    cout << (oa * ob) / b << "\n";
  }
  return 0;
}

