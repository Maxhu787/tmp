#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    int one, two;
    cin >> one >> two;
    for(int i = 0; i < one / 2; i++) {
      cout << 1;
    }
    for(int i = 0; i < two / 2; i++) {
      cout << 2;
    }
    for(int i = 0; i < two / 2; i++) {
      cout << 2;
    }
    for(int i = 0; i < one / 2; i++) {
      cout << 1;
    }
    cout << "\n";
  }
  return 0;
}
