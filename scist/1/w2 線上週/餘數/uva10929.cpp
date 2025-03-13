#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;
  while(cin >> n && n != "0") { 
    int even=0, odd=0;
    for(int i = 0; i < n.size(); i++) {
      if((i+1) % 2 == 0) {
        even += (n[i] - '0');
      } else {
        odd += (n[i] - '0');
      }
    }
    if((even-odd) % 11 == 0) cout << n << " is a multiple of 11." << "\n";
    else cout << n << " is not a multiple of 11." << "\n";
  }
    return 0;
}