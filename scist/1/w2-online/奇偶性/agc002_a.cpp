#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if(a == 0 || b == 0) {
    cout << "Zero\n";
    return 0;
  }
  if(a < 0) {
    if(b < 0) {
      cout << (((a+b)*-1 - 1) % 2 == 0 ? "Positive" : "Negative") << "\n";
    } else {
      cout << "Zero\n";
    }
  } else {
    cout << "Positive\n";
  }
  return 0;
}