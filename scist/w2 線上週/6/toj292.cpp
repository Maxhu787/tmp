#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int curr, tar;
  string n;
  cin >> curr >> tar >> n;

  if(curr == 2) {
    int b = 2;
    string number = n;
    int t;
    int ans = 0;
    for(int i = number.size()-1, t = 1; i >= 0; i--, t*=b) {
      int d = number[i] - '0';
      ans += d * t;
    }
    cout << ans << "\n";
  } else {
    int num = stoi(n);
    int b;
    string str;
    for(; num > 0; num /=b) {
      int d = num % b;
      char c = d + '0';
      str += c;
    }
    if(str.empty()) {
      str = "0";
    }
    reverse(str.begin(), str.end());
    cout << str << "\n";
  }
}