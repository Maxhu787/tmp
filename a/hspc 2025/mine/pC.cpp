#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

const long long MXN = 2e5 + 3;

int main()
{
  cin.tie(0);ios::sync_with_stdio(0);
  long long n;
  cin >> n;
  pair<long long, long long> a[MXN];
  for(long long i = 0; i < n; i++) 
  {
    long long l, r;
    cin >> l >> r;
    a[i*2].first = l;
    a[i*2].second = 1;
    a[i*2+1].first = r;
    a[i*2+1].second = -1;
  }
  sort(a, a+n*2);

  long long current = a[0].second, o=0;
  for(long long i = 1; i < n * 2; i++) 
  {
    o += current * current * (a[i].first - a[i-1].first);
    current += a[i].second;
  }
  cout << o << "\n";
  
  return 0;
}


/*
1 2 3 4 5
0 0 0 0 0 -> 0 0 0 0 0
1 1 1 1 1 -> 1, 5 -> 1 0 0 0 0
2 2 2 1 1 -> 1, 3 -> 2 0 0 -1 0


1 2 2 2 2 -> 2, 5 -> 1 1 0 0 0
1 2 3 3 3 -> 3, 5 -> 1 1 1 0 0


1 1 1 1 1
1 2 2 2 2


*/

// 0 1 2 3 4 5
// 1 1 1 0 0 -3

// 1 2 3 3 3
