#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int &i : a) cin >> i;

  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++) cout << a[i] << (i == n - 1 ? '\n' : ' ');

  int current = a[n-1];
  cout << current;
  for(int i = n-2; i >= 0; i--) {
    if(a[i] != current) {
      cout << " " << a[i];
      current = a[i];
    }
  }
  cout << "\n";


  return 0;
}