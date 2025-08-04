#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> o;

  while(n--) {
    int start, end;
    cin >> start >> end;
    o.push_back({start, 1});
    o.push_back({end + 1, -1});
  }
  sort(o.begin(), o.end());

  int maxP = 0, curr = 0;
  for(int i = 0; i < (int)o.size(); i++) {
    curr += o[i].second;
    maxP = max(maxP, curr);
  }
  
  cout << maxP << "\n";
  return 0;
}
