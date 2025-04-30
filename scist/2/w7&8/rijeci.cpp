#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
using namespace std;

unordered_map<int, int> o = {{1, 0}, {2, 1}};

int f(int n) {
  if(n == 1) return 0;
  if(n == 2) return 1;
  if(o.count(n)) {
    return o[n];
  }
  o[n] = f(n-1) + f(n-2);
  return o[n];
}

int main() {
  int k;
  cin >> k;
  cout << f(k) << " " << f(k+1) << "\n";
  return 0;
}

/*
a -> b
b -> ba

1, 0 A
0, 1 B
1, 1 BA
1, 2 BAB
2, 3 BABBA
3, 5 BABBABAB
5, 8
8, 13

g(1) = 1
g(2) = 0
g(x) = g(x-1) + g(x-2)

f(1) = 0
f(2) = 1
f(x) = f(x-1) + f(x-2)

*/