#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<string, vector<int>>> people(n);
    for (int i = 0; i < n; ++i) {
        cin >> people[i].first;
        people[i].second.resize(m);
        for (int j = 0; j < m; ++j) {
            cin >> people[i].second[j];
        }
    }

    for (int j = 0; j < m; ++j) {
        bool hasSolved = false;
        for (int i = 0; i < n; ++i) {
            if (people[i].second[j] == 1) {
                if (hasSolved) {
                    cout << " ";
                }
                cout << people[i].first;
                hasSolved = true;
            }
        }
        if (!hasSolved) {
            cout << "-1";
        }
        cout << endl;
    }

    return 0;
}
