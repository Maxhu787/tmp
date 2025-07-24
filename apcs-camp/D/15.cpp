#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    int max_i = 0, max_j = 1;
    long long max_dist_sq = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long dx = points[i].first - points[j].first;
            long long dy = points[i].second - points[j].second;
            long long dist_sq = dx * dx + dy * dy;

            if (dist_sq > max_dist_sq ||
               (dist_sq == max_dist_sq && (i < max_i || (i == max_i && j < max_j)))) {
                max_dist_sq = dist_sq;
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << max_i << " " << max_j << endl;
    return 0;
}
