#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  int min = INT_MAX;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] < min) min = a[i];
  }

  int smallest[n-1];
  for(int i = 0; i < n-1; i++) {
    smallest[i] = i;
    if(a[i] != min) {
      smallest[i] = min;
    } else {
      int t = INT_MAX;
      for(int j = i+1; j < n; j++) {
        if(a[j] < t) t = a[j];
      }
      min = t;
      smallest[i] = t;
    }
  }

  int o = 0;
  for(int i = 0; i < n-1; i++) {
    o = max(o, a[i] - smallest[i]);
  }

  cout << o << "\n";
  return 0;
}


/*


2 9 8 3 4

3 3 3 4 0


5 4 3 2 1
1 1 1 1 0

*/