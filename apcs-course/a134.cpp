#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool l(int y) {
  return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int d(int y, int m) {
  int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  if (m == 2 && l(y)) return 29;
  return a[m-1];
}

bool p(string s) {
  int i = 0, j = s.size()-1;
  while (i < j) if (s[i++] != s[j--]) return false;
  return true;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    int y;
    cin >> y;
    vector<string> v;
    for (int m = 1; m <= 12; m++) {
      int md = d(y,m);
      for (int i = 1; i <= md; i++) {
        vector<string> f;
        string s1 = to_string(y)+to_string(m)+to_string(i);
        string s2 = to_string(y)+(m<10?"0":"")+to_string(m)+to_string(i);
        string s3 = to_string(y)+to_string(m)+(i<10?"0":"")+to_string(i);
        string s4 = to_string(y)+(m<10?"0":"")+to_string(m)+(i<10?"0":"")+to_string(i);
        f.push_back(s1); f.push_back(s2); f.push_back(s3); f.push_back(s4);
        for (auto x : f) if (p(x)) v.push_back(x);
      }
    }
    cout << v.size();
    for (auto x : v) cout << " " << x;
    cout << "\n";
  }
  return 0;
}
