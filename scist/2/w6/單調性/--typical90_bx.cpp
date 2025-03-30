#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, sum=0;
  cin >> n;

  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i]; sum += a[i];
  }

  if(sum % 10 != 0) {
    cout << "No" << "\n";
    return 0;
  }

  for(int i = 1; i < n-1; i++) {
    cout << a[i] << "\n";
  }

  cout << "No" << "\n";
  return 0;
}