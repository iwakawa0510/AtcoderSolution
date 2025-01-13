#include <stdio.h>
int main() {
    int n, d, t[100], l[100];
    scanf("%d%d", &n, &d);  // ヘビの数 n と 長さ増加量の最大値 d を入力

    // 各ヘビの太さ t[i] と 初期長さ l[i] を入力
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &t[i], &l[i]);
    }

    // 長さの増加量 j ごとに処理を行う
    for (int j = 1; j <= d; j++) {
        int m = 0;  // 各増加量 j に対する最大値を初期化

        // 各ヘビの重さを計算し、最大値を求める
        for (int i = 0; i < n; i++) {
            int weight = (l[i] + j) * t[i];
            if (weight > m) {
                m = weight;  // 最大値を更新
            }
        }

        // 現在の増加量 j における最大値を出力
        printf("%d\n", m);
    }

    return 0;
}