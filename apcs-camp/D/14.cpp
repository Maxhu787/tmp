#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long n;
  cin >> n;
  cout << (long long) sqrt(n) << endl;
  return 0;
}

/*
light stays on if its positions factorial count is odd

and the number of perfect sqaures between 1 and n is floor(sqrt(n))
cause 1*1, 2*2, 3*3,..., n*n

the number of perfect squares is the number of lights that would stay turned on
*/