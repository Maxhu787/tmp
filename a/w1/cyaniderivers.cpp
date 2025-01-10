#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int c=0, max=0;
    for(int i = 1; i < n.length(); i++) {
      if(n[i] == '1') {
        if(c > max) {
          max = c;
          c = 0;
        } else {
          c = 0;
        }
      } else {
        c++;
      }
    }
    if(max % 2 == 0) {
      cout << max / 2 << "\n";
    } else {
      cout << max / 2 + 1 << "\n";
    }
}
