#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  if(n == m) {
    cout << ((n * m) % 2 == 0 ? "Malvika" : "Akshat") << "\n";
  } else {
    int t = min(n, m);
    cout << (t % 2 == 0 ? "Malvika" : "Akshat") << "\n";  
  }
  return 0;
}

// n == m: 3 * 3 -> 2 * 2 -> 1

// n != m: 2 * 3 -> 1 * 2 -> 1