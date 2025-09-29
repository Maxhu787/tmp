#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int n;
  while(cin >> n) {
    if(n % 2 == 0) {
      int o = 1;
      for(int i = 0; i < n/2; i++) o *= 10;
      for(int i = 0; i < o; i++) {
        for(int j = 0; j < o; j++) {
          if((i + j) * (i + j) == i * o + j) {
            cout << setw(n) << setfill('0') << i * o + j << "\n";
          }
        }
      }
    }
  }

  return 0;
}