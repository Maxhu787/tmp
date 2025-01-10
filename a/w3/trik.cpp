#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  const int N = 3;
  const int T[N][2] = {{0, 1}, {1, 2}, {0, 2}};

  bool c[N] = {true};
  string s;
  cin >> s;

  for(int i = 0; i < s.length(); i++) {
    int t = s[i] - 'A';
    swap(c[T[t][0]], c[T[t][1]]);
  }

  for(int i = 0; i < N; i++) {
    if(c[i] == true) {
      cout << i + 1 << "\n";
    }
  }
  return 0;
}