#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<bool> a(n, false);

  for(int i = 1; i < n; i++) {
    int t;
    cin >> t;
    a[t - 1] = true;
  }

  for(int i = 0; i < n; i++) {
    if(a[i] == false) {
      cout << i + 1 << "\n";
    }
  }
  return 0;
}
