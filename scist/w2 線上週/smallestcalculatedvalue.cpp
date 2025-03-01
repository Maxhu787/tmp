#include <iostream>
#include <climits>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  long long o = LLONG_MAX;

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      long long temp=a;
      if(i == 0) temp += b;
      else if(i == 1) temp -= b;
      else if(i == 2) temp *= b;
      else if(i == 3 && temp % b == 0 && b != 0) temp /= b; 
      else continue;

      if(j == 0) temp += c;
      else if(j == 1) temp -= c;
      else if(j == 2) temp *= c;
      else if(j == 3 && temp % c == 0 && c != 0) temp /= c;
      else continue;
      
      if(temp >= 0) o = min(o, temp);
    }
  }
  cout << o << "\n";
  return 0;
}