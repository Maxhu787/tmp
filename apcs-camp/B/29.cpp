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
    for(int i = 0; i < t; i++) {
      string oo((g-temp)/2, ' ');
      string o(temp, '*');
      cout << oo << o << "\n";
      temp+=2;
    }
    if(n != 0) {
      cout << "\n";
    }
  }
}