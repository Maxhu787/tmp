#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int step, siz;
pair<int, int> buf;
bool islook[11][11];
queue<pair<int, int>> nxt;

int main() {
  nxt.push({1, 1});
  islook[1][1] = 1;
  for (step = 0; nxt.size(); step++) {
    siz = nxt.size();
    cout << step << '\n';
    while (siz--) {
      buf = nxt.front();
      cout << '(' << buf.first << ',' << buf.second << ')';
      nxt.pop();
      if (buf.first + 1 <= 10) {
        if (!islook[buf.first + 1][buf.second]) {
          islook[buf.first + 1][buf.second] = 1;
          nxt.push({buf.first + 1, buf.second});
        }
      }
      if (buf.second + 1 <= 10) {
        if (!islook[buf.first][buf.second + 1]) {
          islook[buf.first][buf.second + 1] = 1;
          nxt.push({buf.first, buf.second + 1});
        }
      }
    }
    cout << '\n';
  }
  cout << step;

  return 0;
}
