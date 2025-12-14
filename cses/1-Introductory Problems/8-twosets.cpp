#include <iostream>
#include <set>
using namespace std;

#define ll long long

int main() {
  ll n;
  cin >> n;

  if(n*(n+1)/2 % 2 != 0) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    set<ll> a, b;
    ll target = n*(n+1)/4;
    int t = n;
    for(int i = 1; i <= n; i++) {
      a.insert(i);
    }
    while(a.count(target) == 0) {
      target-=t;
      b.insert(t);
      a.erase(t);
      t--;
    }
    a.erase(target);
    b.insert(target);
    cout << a.size() << "\n";
    for(int i : a) cout << i << " ";
    cout << b.size() << "\n";
    for(int i : b) cout << i << " ";
    cout << "\n";
  }
  return 0;
}

/*

s = n*(n+1)/2

s1 + s2 = s
s1 = s2 = s/2 = n*(n+1)/4

1 2 3 4 5 6 7
*/