#include <iostream>
using namespace std;

int main() {
  int n, t;
  long long o = 0;
  cin >> n;
  int a[200] = {0};
  for(int i = 0; i < n; i++) {
    cin >> t;
    a[t%200]++;
  }

  for(int i = 0; i < 200; i++) {
    if(a[i] != 0) {
      o += (static_cast<long long>(a[i]) * (a[i] - 1)) / 2;
    }
  }
  cout << o << "\n";

  return 0;
}
/*

6
123 223 123 523 200 2000



2 1 3

2 * 1 // 2 => 1
1 * 0 // 2 => 0
3 * 2 // 2 => 3
=> 4

4 * 3 // 2 => 6  
3 * 2 // 2 => 3
1 * 0 // 2 => 0
=> 9
*/