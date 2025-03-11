#include <iostream>
#include <utility>
#include <map>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<pair<int, int>> a;
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    a.push_back(pair<int, int> {t, i})
  }
  return 0;
}