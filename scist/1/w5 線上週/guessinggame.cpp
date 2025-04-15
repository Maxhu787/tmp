#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int upper=10, lower=1, n;

  while (cin >> n && n != 0) {
    cin.ignore();
    getline(cin, s);
    if(s == "too high") {
      if(n-1 < upper) upper = n-1;
    } else if(s == "too low") {
      if(n+1 > lower) lower = n+1;
    } else {
      if (n < lower || n > upper) cout << "Stan is dishonest\n";
      else cout << "Stan may be honest\n";
      upper = 10;
      lower = 1;
    }
  }
  
  return 0;
}