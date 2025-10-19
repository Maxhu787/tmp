#include <iostream>
#include <algorithm>
using namespace std;

struct job {
  int start;
  int end;
};

bool cmp(job a, job b) {
  if(a.start == b.start) return a.end < b.end;
  return a.start < b.start;
}

int main() {
  int n, ans, m[101];
  job jb[101];
  while(cin >> n) {
    for(int i = 0; i < n; i++) {
      cin >> jb[i].start >> jb[i].end;
    }
    sort(jb, jb+n, cmp);
    ans = 1;
    m[0] = jb[0].end;
    for(int i = 1; i < n; i++) {
      bool found = false;
      for(int j = 0; j < ans; j++) {
        if(m[j] <= jb[i].start) {
          m[j] = jb[i].end;
          found = true;
          break;
        }
      }
      if(!found) {
        m[ans] = jb[i].end;
        ans++;
      }
    }
    cout << ans << "\n";
  }
}