#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  // longest side < other two sides sum
  int n = 0, count = 1;
  while(cin >> n) {
    int o=0;
    while(n--) {
      int a, b, c;
      cin >> a >> b >> c;

      if(a > b) {
        swap(a, b);
      }
      if(b > c) {
        swap(b, c);
      }
      if(c < (b + a)) {
        o++;
      }
    }
    cout << "Case " << count << ": " << o << "\n";
    count++;
  }
  return 0;
}