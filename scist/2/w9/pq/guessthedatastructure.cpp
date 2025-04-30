#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;

    bool is_stack = true, is_queue = true, is_pq = true;

    for (int i = 0; i < n; i++) {
      int type, value;
      cin >> type >> value;
      if (type == 1) {
        if (is_stack) s.push(value);
        if (is_queue) q.push(value);
        if (is_pq) pq.push(value);
      } else {
        if (is_stack) {
          if (s.empty() || s.top() != value) is_stack = false;
          else s.pop();
        }
        if (is_queue) {
          if (q.empty() || q.front() != value) is_queue = false;
          else q.pop();
        }
        if (is_pq) {
          if (pq.empty() || pq.top() != value) is_pq = false;
          else pq.pop();
        }
      }
    }

    int possible = is_stack + is_queue + is_pq;
    if (possible == 0) cout << "impossible\n";
    else if (possible > 1) cout << "not sure\n";
    else if (is_stack) cout << "stack\n";
    else if (is_queue) cout << "queue\n";
    else cout << "priority queue\n";
  }
  return 0;
}
