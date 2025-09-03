#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;

bool cmp(int a, int b) {
  int ma = a % m; int mb = b % m;
  if(ma == mb) {
    if(a % 2 == 0 && b % 2 == 0) return a < b;
    if(a % 2 != 0 && b % 2 != 0) return a > b;
    if(a % 2 != 0) return true;
    return false;
  }
  return ma < mb;
}

int main() {
  while(cin >> n >> m && n != 0 && m != 0) {
    cout << n << " " << m << "\n";
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end(), cmp);
    for(int i : a) cout << i << "\n";
  }
  cout << "0 0\n";
  return 0;
}