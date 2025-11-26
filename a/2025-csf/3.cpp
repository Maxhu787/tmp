#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

int main() {
  OK LOL
  
  vector<int> current(4,0), target(4,0);
  for(int &i : current) cin >> i;
  for(int &i : target) cin >> i;

  int o=0;
  for(int i = 0; i < 4; i++) {
    int a = (target[i] - current[i] + 10) % 10;
    int b = (current[i] - target[i] + 10) % 10;
    o += min(a, b);
  }
  cout << o << "\n";
  return 0;
}