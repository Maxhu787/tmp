#include <iostream>
using namespace std;

int main() {
  long long n, o=0;
  cin >> n;
  while(n--) {
    int t;
    cin >> t;
    o += t;
  }
  cout << o << "\n";
  return 0;
}