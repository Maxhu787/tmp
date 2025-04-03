#include <iostream>
using namespace std;

int f(bool &imba) {
  int wl, dl, wr, dr;
  cin >> wl >> dl >> wr >> dr;

  if(wl == 0) wl = f(imba);
  if(wr == 0) wr = f(imba);

  imba |= (wl * dl != wr * dr);
  return wl + wr;
}

void solve() {
  bool imba = false;
  f(imba);
  cout << (imba ? "NO" : "YES") << "\n";
}

int main() {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    if(i != 0) cout << "\n";
    solve();
  }  
  return 0;
}