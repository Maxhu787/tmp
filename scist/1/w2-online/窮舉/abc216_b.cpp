#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> f(n), l(n);

  string ans = "No";
  for(int i = 0; i < n; i++) {
    cin >> f[i] >> l[i];
    for(int j = 0; j < i; j++) {
      if(f[i] == f[j] && l[i] == l[j]) {
        ans = "Yes";
      }
    }
  }
  cout << ans << "\n";
}