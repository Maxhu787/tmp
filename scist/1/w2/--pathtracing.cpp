#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  vector<pair<int, int>> v;
  string s;
  int x=0, y=0, maxx=INT_MIN, maxy=INT_MIN, minx=INT_MAX, miny=INT_MAX;
  while(cin >> s && s != "e") {
    if(s == "down") y--;
    else if(s == "up") y++;
    else if(s == "left") x--;
    else if(s == "right") x++;

    maxx = max(maxx, x);
    maxy = max(maxy, y);
    minx = min(minx, x);
    miny = min(miny, y);
    v.push_back({x, y});
  }

  int height = maxx - minx + 1;
  int width = maxy - miny + 1;
  cout << x << " " << y << "\n";
  for(int i = 0; i < v.size(); i++) {
    cout << v[i].first + 4 << " " << v[i].second - 1 << "\n";
  }
  return 0;
}