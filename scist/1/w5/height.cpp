#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> a) {
  int count = 0;
  for(int i = 1; i < a.size(); i++) {
    int key = a[i], j = i-1;
    while(j >= 0 && a[j] > key) {
      a[j+1] = a[j];
      j--;
      count++;
    }
    a[j+1] = key;
  }
  return count;
}

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    int t; 
    cin >> t;
    vector<int> a(20);
    for(int &h : a) cin >> h;
    cout << i + 1 << " " << insertionSort(a) << "\n";
  }
  return 0;
}

// basically insertion sort