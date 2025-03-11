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


// #include <iostream>
// #include <algorithm>
// #include <unordered_map>
// #include <vector>
// using namespace std;
 
// int main() {
//   int n, x;
//   cin >> n >> x;
  
//   long long o=0;
//   long long prefixSum = 0;
//   unordered_map<long long, int> prefixCount;
//   prefixCount[0] = 1;
 
//   for(int i = 0; i < n; i++) {
//     int t;
//     cin >> t;
//     prefixSum += t;
 
//     if(prefixCount.find(prefixSum - x) != prefixCount.end()) {
//       o += prefixCount[prefixSum - x];
//     }
 
//     prefixCount[prefixSum]++;
//   }
//   cout << o << "\n";
//   return 0;
// }