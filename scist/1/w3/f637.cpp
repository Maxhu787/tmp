#include <iostream>
#include <string>
using namespace std;

string s;
int i=0;

int f(int n) {
  char c = s[i++];
  if(c == '0') return 0;
  if(c == '1') return n * n;
  
  return f(n/2) + f(n/2) + f(n/2) + f(n/2);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  getline(cin, s);
  int n;
  cin >> n;

  cout << f(n) << "\n";
  return 0;
}