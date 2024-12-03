#include <iostream>
using namespace std;
//ChatGPTで作成した模範解答らしきもの,
int main() {
    const int MAX_SIZE = 100;  // 最大サイズを固定
    int r, c;

    // 行数と列数の入力
    cin >> r >> c;

    // 最大サイズの配列を宣言
    int table[MAX_SIZE + 1][MAX_SIZE + 1] = {0};

    // 入力と計算
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> table[i][j];
            table[i][c] += table[i][j];  // 行合計を最後の列に加算
            table[r][j] += table[i][j];  // 列合計を最後の行に加算
            table[r][c] += table[i][j];  // 全体の合計を右下の隅に加算
        }
    }

    // 出力
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            cout << table[i][j];
            if (j < c) cout << " ";  // 隣り合う数値の間に空白を挿入
        }
        cout << endl;
    }

    return 0;
}
