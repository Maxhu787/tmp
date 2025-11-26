#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> ticket(n), c(m);
  for(int &i : ticket) cin >> i;
  for(int &i : c) cin >> i;

  sort(ticket.begin(), ticket.end());
  int pt=0, pc=0, current=-1;
  while(pt <= n && pc <= m) {
    if(pt == n || pc == m) {
      cout << current << "\n";
      for(int i = pc+1; i < m; i++) {
        cout << -1 << "\n";
      }
      break;
    }
    if(ticket[pt] > c[pc]) {
      if(current == -1) {
        cout << -1 << " " << current << "\n";
      }
      cout << current << " " << current << "\n";
      pc++;
    }
    current = ticket[pt];
    pt++;
  }
  return 0;
}

/*
ticket 3 5 5 7 8
     c 4 8 3 


5 3
5 5 7 8 5
4 8 3
*/