#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int &i : a) cin >> i;

  int odd=0, even=0;
  for(int i = 0; i < n; i++) {
    if(a[i] % 2 == 0) even++;
    else odd++;
  }
  cout << (odd % 2 == 0 ? "YES" : "NO") << "\n";
  return 0;
}