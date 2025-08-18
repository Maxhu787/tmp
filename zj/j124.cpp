#include <iostream>
#include <cmath>
using namespace std;

long long o = 0;
void dfs(int last) {
  int n;
  cin >> n;

  if(!n) return;
  if(last) o += abs(last - n);

  if(n & 1) {
    dfs(n);
    dfs(n);
    dfs(n);
  } else {
    dfs(n);
    dfs(n);
  }
}

int main() {
  dfs(0);
  cout << o << "\n";
  return 0;
}