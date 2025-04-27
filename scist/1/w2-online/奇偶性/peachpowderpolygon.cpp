#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 4 == 2) ? "Yes" : "No") << "\n";
    
    return 0;
}

/*
給正偶數 n 邊形
將角依順時針編號 1 至 n
起始 A 在 1、B 在 2
每個角能走到相鄰角（+1或-1）
以及對角（加上 n/2）
不考慮在移動中相遇的話
A 是否有可能抓到 B
假設 A, B 皆隨機移動
*/