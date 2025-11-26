#include <iostream>
using namespace std;

#define OK cin.tie(0);
#define LOL ios::sync_with_stdio(0);
typedef long long ll;

int main() {
  OK LOL
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    if(n % 2 != 0) cout << 0 << "\n";
    else if(n == 2) cout << 1 << "\n";
    else cout << n / 4 + 1 << "\n";
  }
  return 0;
}