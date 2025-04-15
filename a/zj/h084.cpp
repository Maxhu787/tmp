#include <iostream>
#include <vector>
using namespace std;
#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

// #define ll long long
// #define pii pair<int, int>
// #define f first
// #define s second

const int mxn = 1e9+7;
const int N = 200005;
int n, k, h[N], poster[5000];

bool che(int tg) {
  vector<int> a;
  int length = 0;
  for(int i = 0; i < n; i++) {
    if(h[i] > tg) length++;
    else {
      if(length != 0) a.push_back(length); length = 0;
    }
  }
  if(length != 0) a.push_back(length);

  int count = 0;
  for(int i = k-1; i >= 0 && a.size(); i--) {
    if(a.back() >= poster[i]) {
      count++;
      a.back()-=poster[i];
    } else {
      while(a.back() < poster[i] && a.size()) a.pop_back();
      i++;
    }
  }
  return count == k;
}

int bin() {
  int l = 0, r = mxn, mid;
  while(l != r) {
    mid = (l + r) >> 1;

    if(che(mid)) {
      l = mid + 1;
    } else {
      r = mid;
    }
  }
  return l-1;

}

signed main() {
  OK LOL;
  cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> h[i];
  for(int i = 0; i < k; i++) cin >> poster[i];

  int o = bin();
  cout << o+1 << "\n";
  return 0;
}