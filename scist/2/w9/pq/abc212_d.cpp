#include <iostream>
#include <functional>
#include <queue>
using namespace std;

#define ll long long

int main() {
  int q;
  cin >> q;

  priority_queue<ll, vector<ll>, greater<ll> > pq;
  ll offset = 0;
  while(q--) {
    int p, x;
    cin >> p;
    if(p == 1) {
      cin >> x;
      pq.push(x - offset);
    } else if (p == 2) {
      cin >> x;
      offset += x;
    } else {
      if(!pq.empty()) {
        cout << pq.top() + offset << "\n";
        pq.pop();
      }
    }
  }
  return 0;
}

/*
keep track of an offset,
when adding values after the offset,
subtract the offset from the value so it evens out

then print output with the offset
*/