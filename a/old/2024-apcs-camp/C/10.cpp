#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int prev;
  bool dec=true, inc=true;
  for(int i = 0; i < n; i++) {
    if(i == 0) cin >> prev;
    int t;
    cin >> t;

    if(t > prev) dec = false;
    else if(t < prev) inc = false;
  }

  if(dec && inc) cout << "SAME\n";
  else if(dec) cout << "DECREASING\n";
  else if(inc) cout << "INCREASING\n";
  else cout << "NO" << "\n";
  return 0;
}