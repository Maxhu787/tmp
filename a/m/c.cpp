#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  int maxN = 0, maxM = 0, maxValuee;
  int minN = 0, minM = 0, minValuee;
  vector<string> answer;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int aa;
      cin >> aa;
      a[i][j] = aa;
      if (i == 0 && j == 0) {
        maxValuee = a[i][j];
        minValuee = a[i][j];
      } else {
        if (aa > maxValuee) {
          maxValuee = aa;
          maxN = i;
          maxM = j;
        }
        if (aa < minValuee) {
          minValuee = aa;
          minN = i;
          minM = j;
        }
      }
    }
  }
  int currentN = maxN, currentM = maxM, current = maxValuee;
  while (true) {
    int u = (currentN - 1 >= 0) ? a[currentN - 1][currentM] : INT_MAX;
    int d = (currentN + 1 < n) ? a[currentN + 1][currentM] : INT_MAX;
    int l = (currentM - 1 >= 0) ? a[currentN][currentM - 1] : INT_MAX;
    int r = (currentM + 1 < m) ? a[currentN][currentM + 1] : INT_MAX;
    int ul = (currentN - 1 >= 0 && currentM - 1 >= 0) ? a[currentN - 1][currentM - 1] : INT_MAX;
    int ur = (currentN - 1 >= 0 && currentM + 1 < m) ? a[currentN - 1][currentM + 1] : INT_MAX;
    int dl = (currentN + 1 < n && currentM - 1 >= 0) ? a[currentN + 1][currentM - 1] : INT_MAX;
    int dr = (currentN + 1 < n && currentM + 1 < m) ? a[currentN + 1][currentM + 1] : INT_MAX;

    int minValue = min({u, d, l, r, ul, ur, dl, dr});
    if(minValue >= current) {
      break;
    } else {
      if (minValue == u) {
        answer.push_back("U");
        current = minValue; 
        currentN -= 1;
      } else if (minValue == d) {
        answer.push_back("D");
        current = minValue; 
        currentN += 1;
      } else if (minValue == l) {
        answer.push_back("L");
        current = minValue; 
        currentM -= 1;
      } else if (minValue == r) {
        answer.push_back("R");
        current = minValue; 
        currentM += 1;
      } else if (minValue == ul) {
        answer.push_back("UL");
        current = minValue; 
        currentN -= 1;
        currentM -= 1;
      } else if (minValue == ur) {
        answer.push_back("UR");
        current = minValue; 
        currentN -= 1;
        currentM += 1;
      } else if (minValue == dl) {
        answer.push_back("DL");
        current = minValue; 
        currentN += 1;
        currentM -= 1;
      } else if (minValue == dr) {
        answer.push_back("DR");
        current = minValue; 
        currentN += 1;
        currentM += 1;
      }
    }
  }

  if(current <= minValuee) {
    cout << "YES" << "\n";
    for(int i = 0; i < answer.size(); i++) {
      if(i != 0) {
        cout << "+" <<answer[i];
      } else {
        cout << answer[i];
      }
    }
  } else {
    cout << "NO" << "\n";
  }

  return 0;
}
