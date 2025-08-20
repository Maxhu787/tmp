#include <iostream>
using namespace std;

const int mxn = 1e5;
int power[mxn], a[mxn], t, n, total;

void dfs(int index, int sum, bool inSubset[]) {
  if(index == n) {
    for(int i = 0; i < n; i++) {
      if(!inSubset[i] && sum <= total/2 && sum + a[i] > total/2) {
        power[i]++;
      }
    }
    return;
  }

  inSubset[index] = false;
  dfs(index + 1, sum, inSubset);

  inSubset[index] = true;
  dfs(index + 1, sum + a[index], inSubset);
}

int main() {
  cin >> t;
  while(t--) {
    cin >> n;
    total = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      power[i] = 0;
      total += a[i];
    }

    bool inSubset[mxn] = {0};
    dfs(0, 0, inSubset);

    for(int i = 0; i < n; i++) {
      cout << "party " << i+1 << " has power index " << power[i] << "\n";
    }
    cout << "\n";
  }
  return 0;
}
