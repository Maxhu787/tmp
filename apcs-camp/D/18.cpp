#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;

  if(a > b) swap(a, b);

  long long start=a, end=b;
  if(a % 2 != 0) start = a+1;
  if(b % 2 != 0) end = b-1;

  if(start == end) {
    cout << start << "\n";
  } else {
    cout << ((start + end) * ((end - start) / 2 + 1)) / 2 << "\n";
  }
  return 0;
}
