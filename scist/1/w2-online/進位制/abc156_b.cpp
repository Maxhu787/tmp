#include <iostream>
using namespace std;

int main() {
  int n, k, o=0;
  cin >> n >> k;

  while(n > 0) {
    o++;
    n /= k;
  }

  cout << o << "\n";
  return 0;
}