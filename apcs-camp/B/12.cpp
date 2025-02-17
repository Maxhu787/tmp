#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double n;
  cin >> n;
  
  if(floor(n) != n) { 
    cout << "X" << "\n";
    return 0;
  }
  long long num = static_cast<long long>(n);
  cout << (num % 2 == 0 ? "Even" : "Odd") << "\n";
  return 0;
}