#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(int &i : a) cin >> i;

  return 0;
}