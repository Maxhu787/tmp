#include <iostream>
#include <vector>
using namespace std;

const int mxn = 1e9;

int main() {
  int n, index=2;
  cin >> n;

  vector<int> fibo;
  fibo.push_back(1);
  fibo.push_back(1);
  while((fibo[index-1] + fibo[index-2]) <= n) {
    fibo.push_back(fibo[index-1] + fibo[index-2]);
    index++;
  }

  index--;
  vector<int> o;
  while(n > 0) {
    if(fibo[index] > n) {
      index--;
    } else {
      o.push_back(fibo[index]);
      n -= fibo[index];
    }
  }

  for(auto it = o.rbegin(); it != o.rend(); it++) {
    cout << *it << " ";
  }
  cout << "\n";
  return 0;
}

/*

1 1 2 3 5 8 13

for example n = 12

find first number <= n;
1 1 2 3 5 8 13
          ^
then 12 - 8 = 4, find first number <= 4
1 1 2 3 5 8 13
      ^
then 4 - 3 = 1, find first number <= 1
1 1 2 3 5 8 13
  ^

answer 8, 3, 1 then print in reverse
final answer 1, 3, 8!
*/