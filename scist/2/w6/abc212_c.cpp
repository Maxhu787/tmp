#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for(int &i : a) cin >> i;
  for(int &i : b) cin >> i;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int i=0, j=0, o=INT_MAX;
  while(i < n && j < m) {
    o = min(o, abs(a[i] - b[j]));
    if(a[i] < b[j]) i++;
    else j++;
  }
  cout << o << "\n";
}