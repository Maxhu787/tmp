#include <iostream>
#include <numeric>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout<< gcd(gcd(a, b), c) << "\n";

  return 0;
}