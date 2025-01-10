#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> temp = {
        {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}, {'G', 16},
        {'H', 17}, {'I', 34}, {'J', 18}, {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22},
        {'O', 35}, {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27}, {'U', 28},
        {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31}, {'Z', 33}
    };

    string test;
    cin >> test;

    int country = temp[test[0]];
    int country_sum = (country % 10) + (country / 10) * 9;

    int total = country_sum;
    int times = 8;
    for (int i = 1; i < test.size() - 1; ++i) {
        total += (test[i] - '0') * times;
        times--;
    }
    total += test.back() - '0';

    if (total % 10 == 0) {
        cout << "real" << endl;
    } else {
        cout << "fake" << endl;
    }

    return 0;
}