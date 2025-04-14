#include <iostream>
using namespace std;

int a[100010], b[100010], c[100010];
int cnt_a[50], cnt_b[50], cnt_c[50];

void solve() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++) cin>>b[i];
  for(int i=1;i<=n;i++) cin>>c[i];
  for(int i=1;i<=n;i++) {
      cnt_a[a[i]%46]++;
      cnt_b[b[i]%46]++;
      cnt_c[c[i]%46]++;
  }
  for(int i = 1; i <= n; i++) {
    cout << cnt_a[i] << " " << cnt_b[i] << " " << cnt_c[i] << "\n";
  }
  // int ans = 0;
  // for(int x=0;x<46;x++){
  //     for(int y = 0;y<46;y++){
  //         int z = (46-(x+y)%46)%46;
  //         ans += cnt_a[x]*cnt_b[y]*cnt_c[z];
  //     }
  // }
  // cout<<ans<<"\n";
}

int main() {
  solve();
  return 0;
}