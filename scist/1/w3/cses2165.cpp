#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int>> moves;

void f(int n, int st, int ed, int mid) {
  if(n==0) return ;
  f(n-1, st, mid, ed);
  moves.push_back({st, ed});
  f(n-1, mid, ed, st);
}

int main() {
  int n;
  cin >> n;
  f(n, 1, 3, 2);

  cout << moves.size() << "\n";
  for(auto i : moves) {
    cout << i.first << " " << i.second << "\n";
  }
  return 0;
}