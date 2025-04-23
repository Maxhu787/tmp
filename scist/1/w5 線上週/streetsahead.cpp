#include <iostream>
#include <unordered_map>
#include <cmath>
#include <string>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  unordered_map<string, int> streetIndex;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    streetIndex[s] = i;
  }
  for(int i = 0; i < q; i++) {
    string a, b;
    cin >> a >> b;
    cout << abs(streetIndex[b] - streetIndex[a]) - 1 << "\n";
  }

  return 0;
}