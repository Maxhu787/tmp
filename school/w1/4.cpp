#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct Student {
  string name;
  int math;
  int english;
};

int main() {
  int a[100];
  memset(a, 0, sizeof(a));
  for(int &i : a) cout << i << " ";
  cout << "\n";

  Student aa = {"john", 99, 85};
  Student bb;
  memcpy(&bb, &aa, sizeof(Student));
  cout << bb.name << " " << bb.math << " " << bb.english << "\n";

  char str1[] = "abcd";
  char str2[] = "abcde";
  int result = memcmp(str1, str2, sizeof(str1));
  if (result > 0) cout << "1 is greater than 2" << "\n";
  else if (result < 0) cout << "1 is less than 2" << "\n";
  else cout << "1 is equal to 2" << "\n";

  return 0;
}
