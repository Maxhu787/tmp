#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << (n % 2 == 0 ? "Alice\n1" : "Bob") << "\n";
  return 0;
}