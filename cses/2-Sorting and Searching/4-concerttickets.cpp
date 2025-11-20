#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), c(m);
  for(int &i : a) cin >> i;
  for(int &i : c) cin >> i;

  sort(a.begin(), a.end());
  int pa=0, pc=0;
  while(pa < n && pc < m) {
    ;
  }
  return 0;
}

/*
4 8 3
3 5 5 7 8


*/