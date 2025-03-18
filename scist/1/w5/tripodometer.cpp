#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> a;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    a.insert(t);
    sum += t;
  }
  vector<int> o;
  cout << a.size() << "\n";
  for(int i : a) {
    o.push_back(sum - i);
  }
  sort(o.begin(), o.end());
  for(int &i : o) cout << i << " ";
  cout << "\n";
  return 0;
}