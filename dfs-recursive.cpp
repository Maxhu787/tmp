#include <iostream>
#include <cmath>
using namespace std;

int tot=0, bufa;

int res(){
  int buf, bufb;
  cin>>buf;
  if(buf == 0){
    return 0;
  }
  for (int i = 0; i < buf % 2 + 2; i++) {
    bufb = res();
    if(bufb != 0){
      tot += abs(buf - bufb);
    }
  }
  return buf;
}

int main(){
  bufa = res();
  cout << tot;

  return 0;
}

//遞迴版