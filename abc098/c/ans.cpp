#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // 東を向いている人の数を数える
    int e = 0;
    for (char c : s) {
        if (c == 'E') {
            e++;
        }
    }

    // 最小の変更回数を初期化
    int min_c = e; // 最悪の場合、全員が西を向く必要がある

    // 各位置をリーダーとした場合の変更回数を計算
    int c = e; // 現在位置より西側の東向きの人の数
    for (char ch : s) {
        if (ch == 'E') {
            c--; // リーダーより西側にいる東向きの人の数を減らす
        } else {
            c++; // リーダーより東側にいる西向きの人の数を増やす
        }
        min_c = min(min_c, c); // 最小値を更新
    }

    cout << min_c << endl;
    return 0;
}
