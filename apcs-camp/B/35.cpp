#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n) {
    double total=0;
    for(int i = 0; i < n; i++) {
      double t;
      cin >> t;
      total += t;
    }
    cout << ((total / n) > 59 ? "no" : "yes") << "\n";
  }
  return 0;
}