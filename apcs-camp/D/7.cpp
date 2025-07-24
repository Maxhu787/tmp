#include <iostream>
#include <iomanip>
using namespace std;

bool isLeap(int n) {
  return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

int main() {
  int n;
  cin >> n;

  cout << (isLeap(n) ? "yes" : "no") << "\n";
  cout << (isLeap(n+10) ? "yes" : "no") << "\n";
  cout << (isLeap(n+20) ? "yes" : "no") << "\n";
  return 0;
}