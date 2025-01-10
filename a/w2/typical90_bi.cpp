#include <iostream>
#include <deque>
using namespace std;

int main() {
  int q, t, x;
  deque<int> d;
  cin >> q;
  while(q--) {
    cin >> t >> x;
    if(t == 1) d.push_front(x);
    else if(t == 2) d.push_back(x);
    else cout << d[x-1] << "\n";
  }
  cout << "\n";
  return 0;
}