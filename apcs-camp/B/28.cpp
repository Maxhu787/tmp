#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  while(n--) {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
      string oo(t-(i+1), ' ');
      string o(i+1, '*');
      cout << oo << o << "\n";
    }
    if(n != 0) {
      cout << "\n";
    }
  }
}