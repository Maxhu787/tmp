#include <iostream>
using namespace std;

int main() {
  int n, i = 1, o = 0;
  cin >> n;
  
  while(true) {
    if(i * (i + 1) * (i + 2) < n) {
      o += 1;
      i++;
    } else {
      break;
    }
  }
  cout << o << "\n";
  return 0;
}