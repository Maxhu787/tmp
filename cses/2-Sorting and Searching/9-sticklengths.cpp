#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;
ll o = 0;

int main() {
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for(int &i : a) cin >> i;

  sort(a.begin(), a.end());
  int t = a[n/2];
  for(int i : a) o += abs(t - i);

  cout << o << "\n";
  return 0;
}