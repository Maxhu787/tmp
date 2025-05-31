#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

vector<int> numbers;

int main() {
  OK LOL
  string s;
  getline(cin, s);

  reverse(s.begin(), s.end());
  int current = 1;
  int temp = 0;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '_') {
      current = 1;
      numbers.push_back(temp);
      temp = 0;
    } else {
      temp = (s[i] - 'a') * current;
      current *= 26;
    }
  }
  numbers.push_back(temp);

  reverse(numbers.begin(), numbers.end());
  
  return 0;
}


//  [1, 1, 4, 5, 1, 4]