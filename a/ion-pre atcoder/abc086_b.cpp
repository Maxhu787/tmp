#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string bufa, bufb, bufc;

int main() {
  cin >> bufa >> bufb;
  bufc = bufa + bufb;

  int temp = sqrt(stoi(bufc));
  cout << (temp * temp == stoi(bufc) ? "Yes" : "No") << "\n";
  return 0;
}