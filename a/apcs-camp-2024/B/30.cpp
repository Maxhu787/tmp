#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  while(n--) {
    int t;
    cin >> t;

    int temp=1;
    int g=1 + 2*(t-1);
    bool b=false;
    for(int i = 0; i < ((t*2)-1); i++) {
      string oo((g-temp)/2, ' ');
      string o(temp, '*');
      cout << oo << o << "\n";
      if((i >= ((t*2)-1) / 2) || b) {
        temp -= 2;
        b = true;
      } else {
        temp+=2;
      }
    }
    if(n != 0) {
      cout << "\n";
    }
  }
}