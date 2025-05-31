#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

stack<pair<int, int>> reg;
int n;
long long total = 0;
pair<int, int> buf;

int main(){
  reg.push({0, 2});
  if(cin>>n){
    reg.push({n, n % 2 + 2});
  }
  while(cin>>n){
    buf = reg.top();
    reg.pop();
    buf.second--;
    if(n == 0){
      while(buf.second == 0){
        buf = reg.top();
        reg.pop();
      }
      reg.push(buf);
    } else {
      reg.push(buf);
      total += abs(n - buf.first);
      reg.push({n, n % 2 + 2});
    }
  }
  cout<<total;

  return 0;
}

//容器版