#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int m=a * 60 + b, n=c * 60 + d;

  if(n < m) {
    n += 24 * 60;
  }
  int o=(n - m) / 60, oo=(n - m) % 60;
  cout << "totally " << o << " hours and " << oo << " minutes." << '\n';
  return 0;
}

/*
n < m 代表少一天 所以補 24 * 60
*/