#include <iostream>
using namespace std;

int main() {
    // 入力
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    // 定数の定義
    const int coin_A = 500;
    const int coin_B = 100;
    const int coin_C = 50;

    // 組み合わせを全探索
    int count = 0;
    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                // 合計金額を計算して条件を満たす場合にカウント
                if (i * coin_A + j * coin_B + k * coin_C == X) {
                    count++;
                }
            }
        }
    }

    // 結果出力
    cout << count << endl;
    return 0;
}