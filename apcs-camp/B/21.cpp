#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n) {
    cout << (((n % 4 == 0 && n % 100 != 0) || (n % 100 == 0 && n % 400 == 0)) ? "a leap year" : "a normal year") << "\n";
  }
  return 0;
}
