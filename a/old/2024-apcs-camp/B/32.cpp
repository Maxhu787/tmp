#include <iostream>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;

  int highest=INT_MIN, time=0, wrong=0;
  for(int i = 0; i < n; i++) {
    int t, s;

    cin >> t >> s;
    if(s > highest) {
      highest = s;
      time = t;
    }
    if(s == -1) {
      wrong++;
    }
  }
  int o = highest - n - (wrong * 2);

  cout << (o > 0 ? o : 0) << " " << time << "\n";
  return 0;
}