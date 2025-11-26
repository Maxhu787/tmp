#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if(a > b) {
    swap(a, b);
  }
  if(b > c) {
    swap(b, c);
  }
  if(a + b <= c) {
    cout << "無法形成三角形" << "\n";
    return 0;
  } 
  int d = a * a + b * b;
  int dd = c * c;
  if(d == dd) {
    cout << "直角三角形" << "\n";
  } else if(a == b && b == c) {
    cout << "正三角形" << "\n";  
  } else if(a == b || a == c || b == c) {
    cout << "等腰三角形" << "\n";
  } else {
    cout << "普通三角形" << "\n";
  }
  return 0;
}


/*
若 a + b ≦ c ，三線段無法構成三角形
若 a × a + b × b < c × c ，三線段構成鈍角三角形 (Obtuse triangle)
若 a × a + b × b = c × c ，三線段構成直角三角形 (Right triangle)
若 a × a + b × b > c × c ，三線段構成銳角三角形 (Acute triangle)
*/