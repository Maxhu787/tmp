#include <iostream>
using namespace std;

#define MAX 100

int main() {
  for(int i = 0; i < MAX; ++i) {
    if(i % 2 == 0) cout << i << " ";
  }
  cout << "\n";
  return 0;
}