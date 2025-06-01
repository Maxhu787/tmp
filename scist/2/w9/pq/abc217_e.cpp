#include <iostream>
#include <functional>
#include <queue>
using namespace std;

int main() {
  int t;
  cin >> t;

  priority_queue<int, vector<int>, greater<int> > pq;
  queue<int> q;
  while(t--) {
    int o, x;
    cin >> o;
    if(o == 1) {
      cin >> x;
      q.push(x);
    } else if (o == 2) {
      if(!pq.empty()) {
        cout << pq.top() << "\n";
        pq.pop();
      } else {
        cout << q.front() << "\n";
        q.pop();
      }
    } else {
      while(!q.empty()) {
        pq.push(q.front());
        q.pop();
      }
    }
  }
  return 0;
}

/*
1: push x to queue
2: if pq empty: print first element of q and pop
   else: print min element of pq and pop 
3: move all values from q to pq

elements pushed in after sorting would be placed in queue
until the sort command is ran again (3)
which will then put the values into the pq
*/