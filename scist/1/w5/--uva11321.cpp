#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;

bool cmp(int a, int b) {
  if(a % 2 == 0) {
    if(b % 2 != 0) {
      if(a % m == b % m) return false;
    } else {
      if(a % m == b % m) a < b;
    }
  } else if(a % 2 != 0) {
    if(b % 2 == 0) {
      if(a % m == b % m) return true;
    } else {
      if(a % m == b % m) a > b;
    }
  }
}

int main() {
  cin >> n >> m;

  vector<int> a(n);
  for(int &i : a) cin >> i;
  int t;
  cin >> t >> t;

  sort(a.begin(), a.end(), cmp);

  cout << n << " " << m << "\n";
  for(int i : a) cout << i << "\n";
  cout << "0 0\n";
  return 0;
}