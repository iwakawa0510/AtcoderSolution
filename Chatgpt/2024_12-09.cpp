#include <iostream>
using namespace std;

int main() {
    int count[100] = {0}; // 最大値に基づく適切なサイズ
    int N[100], n, max_value = 0, max_index = 0;

    // 標準入力
    int i = 0;
    while (cin >> n) {
        N[i++] = n;
    }

    // 全探索で count 配列を更新
    for (int j = 0; j < i; j++) {
        count[N[j]]++;
    }

    // 最大値の探索
    for (int j = 0; j < 100; j++) {
        if (count[j] > max_value) {
            max_value = count[j];
            max_index = j;
        }
    }

    // 結果を出力
    cout << max_index << ", " << max_value << endl;

    return 0;
}
