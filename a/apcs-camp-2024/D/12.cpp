#include <iostream>
#include <string>
using namespace std;

void solve() {
  bool desc=true, asc=true;
  int prev;
  for(int i = 0; i < 10; i++) {
    if(!i) {
      cin >> prev;
    } else {
      int x;
      cin >> x;
      if(x < prev) {
        asc = false;
      } else {
        desc = false;
      }
      prev = x;
    }
  }
  cout << ((desc || asc) ? "Ordered" : "Unordered") << "\n";
}

int main() {
  int q;
  cin >> q;

  cout << "Lumberjacks:" << "\n";
  while(q--) {
    solve();
  }
  return 0;
}