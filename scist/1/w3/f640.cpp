#include <iostream>
#include <string>
using namespace std;

int f() {
  string s;
  cin >> s;

  if(s == "f") {
    int x = f();
    return x * 2 - 3;
  } else if(s == "g") {
    int x = f(), y = f();
    return x * 2 + y - 7;
  } else if(s == "h") {
    int x = f(), y = f(), z = f();
    return x * 3 - y * 2 + z;
  }

  return stoi(s);
}

int main() {
  cout << f() << "\n";
  return 0;
}

/*

𝑓(𝑥) = 2𝑥 – 3
𝑔(𝑥, 𝑦) = 2𝑥 + 𝑦 – 7
ℎ(𝑥, 𝑦, 𝑧) = 3𝑥 – 2𝑦 + 𝑧

*/