#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  cout << max({a, b, c}) - min({a, b, c}) << "\n";
  return 0;
}