#include <iostream>
using namespace std;

int main() {
  int bufa, bufb, bufc;
  cin >> bufa >> bufb >> bufc;
  bool o = false;

  if((bufa && bufb) == bufc) {
    o = true;
    cout << "AND\n";
  }
  if((bufa || bufb) == bufc) {
    o = true;
    cout << "OR\n";
  }
  if(bufa ^ bufb == bufc) {
    o = true;
    cout << "XOR\n";
  }
  if(o == false) {
    cout << "IMPOSSIBLE\n";
  }
  return 0;
}
