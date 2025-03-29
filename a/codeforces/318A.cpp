#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  if(n % 2 == 0) {
    if(k <= (n / 2)) {
      cout << 1 + 2*(k-1) << "\n";
    } else {
      k-=(n/2);
      cout << 2*(k)<< "\n";
    }
  } else {
    if(k <= (n/2+1)) {
      cout << 1 + 2*(k-1) << "\n";
    } else {
      k-=(n/2+1);
      cout << 2*(k)<< "\n";
    }
  }
}