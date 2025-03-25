#include <iostream>
using namespace std;

int main() {
  int n, o=0;
  cin >> n;

  while(n--) {
    int count = 0;
    for(int i = 0; i < 3; i++) {
      int t;
      cin >> t;
      if(t == 1) count++;
    }
    if(count >= 2) o++;
  }
  cout << o << "\n";
  return 0;
}