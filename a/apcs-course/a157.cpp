#include <iostream>
using namespace std;

const int mxn = 30;
int fibo[mxn];

int main() {
  fibo[0] = 1, fibo[1] = 1;
  for(int i = 2; i < mxn; i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }
  int n;
  while(cin >> n) {
    cout << fibo[n-1] << "\n";
  }
  return 0;
}