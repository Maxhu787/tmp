#include <iostream>
#include <numeric>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;

  cout<< lcm(lcm(a, b), c) << "\n";

  return 0;
}