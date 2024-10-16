#include <iostream>
using namespace std;
//配列が動的な為良い解答ではない,
int main(){
    int r,c;
    // 行数と列数の入力
    cin >> r >> c;

    // 1行と1列を追加した表を定義
    int table[r+1][c+1] = {0};
    

    // 入力と計算
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> table[i][j];
            table[i][c] += table[i][j];  // 行合計を最後の列に加算
            table[r][j] += table[i][j];  // 列合計を最後の行に加算
            table[r][c] += table[i][j];  // 全体の合計を右下の隅に加算
        }
    }

    // 出力
    for(int i = 0; i <= r; i++){
        for(int j = 0; j <= c; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
