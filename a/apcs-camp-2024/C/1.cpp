#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int &i : a) cin >> i;
  for(int i = n-1; i >= 0; i--) {
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}