#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define N 200005
int n, l;
pii cut[N];
set<int> a;
int main() {
  scanf("%d%d",&n,&l);
  for(int t = 0; t < n; t++) {
    int x,i;
    scanf("%d%d",&x,&i);
    cut[t].first = i,cut[t].second = x;
  }
  a.insert(0); a.insert(l);
  sort(cut, cut+n);
  ll o = 0;
  for(int i = 0; i < n; i++) {
    int temp = cut[i].second;
    auto it = a.lower_bound(temp);
    int l = *prev(it, 1), r = *it;
    o += (r - l);
    a.insert(temp);
  }
  printf("%lld\n",o);
}
