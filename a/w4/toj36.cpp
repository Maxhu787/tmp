#include <iostream>
#define ll long long
using namespace std;

ll solve(ll a, ll b, ll c) {
  ll result = 1;
  a = a % c;
  while(b > 0) {
    if(b % 2 != 0) {
      result = (result * a) % c;
    }
    b /= 2;
    a = (a * a) % c;
  }
  return result;
}

int main() {
  long long a, b, c;
  cin >> a >> b >> c;

  cout << solve(a, b, c) << "\n";
  return 0;
}