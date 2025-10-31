#include <iostream>
#include <algorithm>
using namespace std;

int n, d;
int bufa, bufb, bufc;

int main() {
  cin >> n >> d;

  int o = 0, count=0;
  for(int i = 0; i < n; i++) {
    cin >> bufa >> bufb >> bufc;
    int t=max({bufa, bufb, bufc}), tt=min({bufa, bufb, bufc});
    if(t - tt >= d) {
      o += (bufa + bufb + bufc) / 3;
      count++;
    }
  }
  cout << count << " " << o << "\n";
  return 0;
}