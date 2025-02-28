#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  long long sum=0, t;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  cin >> t;
  long long curr = (t/sum) * sum;
  long long dd = (t/sum) * n;

  for(int i = 0; i < n; i++) {
    curr += a[i];
    dd++;
    if(curr > t) {
      cout << dd << "\n";
      return 0;
    }
  }
  return 0;
}