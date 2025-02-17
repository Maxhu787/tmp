#include <iostream>
using namespace std;

int main() {
  int r, a;
  cin >> r >> a;
  if(r == a) {
    a -= 3;
  }
  int d = r-a;
  if(d < a) {
    cout << d << "+" << a << "=" << r << "\n";
  } else {
    cout << a << "+" << d << "=" << r << "\n";
  }
  return 0;
}