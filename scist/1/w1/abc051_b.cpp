#include <iostream>
using namespace std;

int main() {
  int k, s, t = 0;
  cin >> k >> s;

  for(int i = 0; i <= k; i++) {
    for(int j = 0; j <= k; j++) {
      if(s - (i + j) <= k and s - (i + j) >= 0) {
        t += 1;
      }
    }
  }
  cout << t << "\n";

  return 0;
}