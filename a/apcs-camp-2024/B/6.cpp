#include <iostream>
using namespace std;

int main() {
  double a[14] = {74.06, 68.77, 63.48, 58.19, 52.9, 47.61, 42.32, 37.03, 31.74, 26.45, 21.16, 15.87, 10.58, 5.29};
  double n;
  cin >> n;
  for(int i = 0; i < 14; i++) {
    if(n > a[i]) {
      cout << 15-i << "\n";
      return 0;
    }
  }
  
  if(n == 0) {
    cout << 0 << "\n";
  } else {
    cout << 1 << "\n";
  }
  return 0;
}

