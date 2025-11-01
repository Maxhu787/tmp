#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = n - 200 * (n / 2000);
  int b = n - 100 * (n / 1000);

  if (a == b) {
    cout << a << " " << 0 << "\n";
    return 0;
  }
  if(a < b) {
    cout << a << " " << 0 << "\n";
  } else {
    cout << b << " " << 1 << "\n";
  }
  return 0;
}