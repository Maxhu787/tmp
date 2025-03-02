#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<pair<int, int>> vec = {{1, 3}, {2, 1}, {3, 2}};
    sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
      return a.second < b.second;
    });

    for (auto p : vec) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
