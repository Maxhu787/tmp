#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n && n != 0) {
    cout << "f91(" << n << ") = " << ((n > 100) ? n - 10 : 91) << endl;
  }
}