#include <iostream>
#include <string>
using namespace std;
#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

void solve() {
  int a, f;
  cin >> a >> f;

  for(int i = 0; i < f; i++) {
    for(int j = 1; j < a * 2; j++) {
      if(j > a) {
        int calc = j-2*(j-a);
        string o(calc, char(calc + '0'));
        cout << o << "\n";
      }
      else {
        string o(j, char(j + '0'));
        cout << o << "\n";
      }
    }
    cout << "\n";
  }
}

int main() {
  OK LOL
  int n;
  cin >> n;
  while(n--) {
    solve();
  }
  return 0;
}