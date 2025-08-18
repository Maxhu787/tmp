#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n >= 40) {
    cout << 100 << "\n";
  } else if(n > 20) {
    cout << 80 + (n - 20) * 1 << "\n";
  } else if(n >= 10) {
    cout << 60 + (n - 10) * 2 << "\n";
  } else {
    cout << n * 6 << "\n";
  }
  return 0;
}
