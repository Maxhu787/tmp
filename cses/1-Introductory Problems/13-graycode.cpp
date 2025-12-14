#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < pow(2, n); i++) {
    int test = i;
    vector<int> o;
    while(test != 0) {
      o.push_back(test % 2);
      test /= 2;
    }
    int t = o.size();
    for(int j = 0; j < n - t; j++) {
      o.push_back(0);
    }
    cout << o[o.size()-1];
    for(int j = o.size()-2; j >= 0; j--) {
      int temp = o[j+1] ^ o[j];
      cout << temp;
    }
    cout << "\n";
  }
  return 0;
}

/*

#1 solution

total 2*n strings;
generate binary representations of decimal 0 ~ 2^n

then xor the values and print it out
[0] = o[0];
[i] = o[i] ^ o[i+1]; i 1~o.size()


#2 solution

for n there are 2^n strings
half of which starts with 0,
the other half starts with 1

now that we know what the first character is, 
we can actually fill in the rest with solutions from n = 4;

example: n=3

0 [n=2]
0 [n=2]
0 [n=2]
0 [n=2] : intersection of two parts
1 [n=2] : intersection of two parts
1 [n=2]
1 [n=2]
1 [n=2]

when we get to the intersection of the two parts,
the first character is different, hamming distance is already 1
so the rest should be the same

therefore we reverse the second part of the [n=2] so that they are the same
something like
1
2
3
3
2
1


*/