#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> cards(n);
  for(int &i : cards) cin >> i;
  sort(cards.begin(), cards.end());

  int q;
  cin >> q;
  while(q--) {
    int l, r;
    cin >> l >> r;
    cout << upper_bound(cards.begin(), cards.end(), r) - lower_bound(cards.begin(), cards.end(), l) << "\n";
  }

  return 0;
}