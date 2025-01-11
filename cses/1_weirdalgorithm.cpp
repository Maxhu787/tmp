#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  while(n != 1) {
    cout << n << " ";
    if(n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
  }
  cout << 1 << "\n";
  return 0;
}

// 要記得用 long long 
// 雖然題目是給n <= 10^6，但計算的時候還是有可能遇到超過int的範圍 