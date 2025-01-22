#include <iostream>
using namespace std;

int main() {
  long long n, o=0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 1; i < n; i++) {
    if(a[i] < a[i-1]) {
      o += a[i-1] - a[i];
      a[i] = a[i-1];
    }
  }
  cout << o << "\n";
  return 0;
}


// 3 2 5 1 7
// 3 3 5 5 7