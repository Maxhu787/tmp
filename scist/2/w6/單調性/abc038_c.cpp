#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  
  long long count = 1, o=0, oo=n;
  long long prev; cin >> prev;
  bool increase = true;
  for(long long i = 1; i < n; i++) {
    long long t;
    cin >> t;

    if(t > prev) {
      count++;
    } else {
      if(count > 1) {
        o += count * (count+1)/2;
        oo -= count;
      }
      count = 1;
    }
    prev = t;
  }

  if(count > 1) {
    o += count * (count+1)/2; 
    oo -= count;
  }
  cout << o + oo << "\n";
  return 0;
}

/*
5
1 2 3 2 1
Ans = 8

1, (1, 2), (1, 3)
2, (2, 3)
3
2
1

o = get all sub array of each increasing array,
sub arrays of increasing array of length n 
= n*(n+1) / 2

oo = 5 - foreach n;
then add oo and o;
*/