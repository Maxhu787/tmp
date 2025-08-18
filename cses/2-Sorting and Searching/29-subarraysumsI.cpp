#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n, x;
  cin >> n >> x;
  
  vector<long long> a(n);
  for(auto &i : a) cin >> i;

  long long count=0, sum=0, start=0;  
  for(long long end = 0; end < n; end++) {
    sum += a[end];

    while(start <= end && sum > x) {
      sum -= a[start++];
    }
    if(sum == x) count++;
  }
  
  cout << count << "\n";
  return 0;
}