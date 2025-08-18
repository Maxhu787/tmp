#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int &i : a) cin >> i;

  long long sum = 0;
  map<long long, int> seen;
  seen[0]++;
  long long o = 0;

  for(int i = 0; i < n; i++) {
    sum += a[i] % n;
    sum = (sum + n) % n;
    o += seen[sum];
    seen[sum]++;
  }

  cout << o << "\n";
  return 0;
}

/*
if two prefix sums have the same value modulo n
then the sum of the values between the prefix sums is divisible by n

for example if n is 5

prefix[3] = 7
so prefix[3] % 5 = 2

and prefix[5] = 12
so prefix[5] % 5 = 2

same modulo

12 - 7 == 5
5 % 5 == 0
*/