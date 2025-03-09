#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std; 

int main() { 
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin >> n;

  int a[n];
  for(int &i : a) cin >> i;

  unordered_map<int, int> index; 
	int o = 0;
	for (int i = 0, j = 0; i < n; i++) { 
		j = max(index[a[i]], j);
		o = max(o, i - j + 1);
		index[a[i]] = i + 1;
	}
  cout << o << "\n";
} 
