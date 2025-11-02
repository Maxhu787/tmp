#include <iostream>
using namespace std;

int main() {
  int n,t;
  cin >> n;

  int o = 0, current = 4;
  for(int i = 0; i < n; i++) {
    cin >> t;
    if(abs(current-t) <= 2) {
      current=t;
      o++;
    }
  }
  cout << o << "\n";


  return 0;
}