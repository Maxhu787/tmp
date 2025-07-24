#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int s = 1;
  for(int i = 2; i*i < n; i++) {
    if(n % i == 0) s += (i + (n/i));
  }

  if(n == 1) s = 0;

  if(s > n) {
    cout << "abundant" << "\n";
  } else if(s == n) {
    cout << "perfect" << "\n";
  } else {
    cout << "deficient" << "\n";
  }
  return 0;
}