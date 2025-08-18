#include <iostream>
#include <algorithm>
using namespace std;

struct job {
  int start;
  int end;
};

bool cmp(job a, job b) {
  return a.end < b.end;
}

int main() {
  int n, now, ans;
  job jb[101];
  while(cin >> n) {
    for(int i = 0; i < n; i++) {
      cin >> jb[i].start >> jb[i].end;
    }
    sort(jb, jb+n, cmp);
    ans = 0;
    now = -1;
    for(int i = 0; i < n; i++) {
      if(now <= jb[i].start) {
        ans++;
        now = jb[i].end;
      }
    }
    cout << ans << "\n";
  }
}

/*
1 10
2 4
3 6
2 5
4 9

2 4
2 5
3 6
4 9
1 10

1 2 3 4 5 6 7 8 9 10
  -----
  -------
    -------
      -----------
--------------------
*/
