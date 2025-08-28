#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int o = 0;
  long long pow = 5;
  while(pow <= n) {
    o += n/pow;
    pow *= 5;
  }
  cout << o << "\n";
  return 0;
}
