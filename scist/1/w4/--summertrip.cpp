#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int a[26] = {0};
  for(char i : s) a[i-'a']++;


  return 0;
}

/*

abbcccddddeeeeea
thenumberofgoodstringsis

*/