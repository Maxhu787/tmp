#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    string a, b, c;

    int o[24] = {0};
    for(int k = 0; k < 3; k++) {
      cin >> a >> b >> c;
      for(int i = 0; i < 24; i++) {
        int m = 0, p = 0;
        for(int j = 0; j < a.length(); j++) {
          if((int(a[j]) - 65) == i/2) {
            if(i % 2 == 0) {m += 1;} else {m += 3;}
          } else {m += 2;}
        }
        for(int j = 0; j < b.length(); j++) {
          if((int(b[j]) - 65) == i/2) {
            if(i % 2 == 0) {p += 1;} else {p += 3;}
          } else {p += 2;}
        }
        if((c == "even" && m == p) || (c == "up" && p > m) || (c == "down" && m > p)) {
          o[i] += 1;
        }
      }
    }
    for(int i = 0; i < 24; i++) {
      if(o[i] == 3) {
        cout << char(i/2 + 65) << " is the counterfeit coin and it is " << ((i % 2 == 0) ? "heavy" : "light") << ".\n";
      }
    }
  }
  return 0;
}