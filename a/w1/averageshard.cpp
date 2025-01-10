#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  while(n--) {
    int a, b;
    cin >> a >> b;
    vector<int> c(a), d(b);
    long double sum_c=0, sum_d=0, o=0;
    
    for(int i = 0; i < a; i++) {
      cin >> c[i];
      sum_c += c[i];
    }
    for(int i = 0; i < b; i++) {
      cin >> d[i];
      sum_d += d[i];
    }
    double o_c = sum_c / (double)a;
    double o_d = sum_d / (double)b;

    for(int i = 0; i < a; i++) {
      if(((sum_c - c[i]) / (a-1)) > o_c && ((sum_d + c[i]) / (b + 1)) > o_d) {
        o++;
      }
    }
    cout << o << "\n";
  }
}
