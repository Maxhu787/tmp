#include <iostream>
#include <cmath>
using namespace std;

int buf1;

int main() {
  while(cin >> buf1 && buf1 != 0) {
    double n = sqrt(buf1);
    if(n == int(n)) cout << "yes\n";
    else cout << "no\n";
  }

  return 0;
}