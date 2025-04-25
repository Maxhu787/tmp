#include <iostream>
using namespace std;

int main() {
  int a, b;
  while(cin >> a >> b) {
    if(a == -1 && b == -1) break;
    int m = (b-a + 100) % 100;
    int n = (a-b + 100) % 100;
    cout << min(m, n) << "\n";
  }
  return 0;
}