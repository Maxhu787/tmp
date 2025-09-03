#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
  ofstream outFile("bmi.txt");

  string n, g, o;
  double h;
  int w;
  cin >> n >> g >> h >> w;

  double bmi =  w / (h * h);
  if (bmi < 18.5) {
    o = "體重過輕";
  } else if (bmi >= 18.5 && bmi < 24.0) {
    o = "正常範圍";
  } else if (bmi >= 24.0 && bmi < 27.0) {
    o = "過重";
  } else if (bmi >= 27.0 && bmi < 30.0) {
    o = "輕度肥胖";
  } else if (bmi >= 30.0 && bmi < 35.0) {
    o = "中度肥胖";
  } else {
    o = "重度肥胖";
  }

  if(outFile.is_open()) {
    outFile << "姓名: " << n << "\n";
    outFile << "性別: " << g << "\n";
    outFile << "身高: " << h << "\n";
    outFile << "體重: " << w << "\n";
    outFile << "BMI: " << fixed << setprecision(2) << bmi << "\n";
    outFile << "判定: " << o << "\n";
    outFile.close();
  }
  return 0;
}