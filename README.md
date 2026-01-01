```cpp

int 10^9
long long 10^18

10^8 / s
g++ a.cpp -std=c++11


for(int mask = 0; mask < (1 << n); mask++)
  if(mask & (1 << pos))

#include <cctype>
tolower, toupper, isalpha

#include <functional>
sort(arr, arr+10, greater<int>());

while(b != 0) {
  a = b;
  b = a % b;
}
return a;

cout << a[i] << " "[i == n-1];
// meaning no space when i is n-1

#include <fstream>
ifstream input("input.txt");
ofstream output("output.txt");
string line;
while(getline(input, line)) {
  output << line << "\n";
}
input.close();
output.close();

#include <queue>
priority_queue<int, vector<int>, greater<int> > pq;


int gcd(int a, int b) {
  if(b == 0) return a;
  return gcd(b, a%b);
}

int lcm(int a, int b) {
  return abs(a * b) / gcd(a, b);
}


```
