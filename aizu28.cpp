#include <iostream>
using namespace std;

int main(){

    int n,m,l;
    cin >> n >> m >> l;
    int matrixA[n][m] = {0};
        // 行列Aの入力,
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrixA[i][j];
        }
    }
    int matrixB[m][l] = {0};
        // 行列Bの入力,
    for (int j = 0; j < m; j++) {
        for (int k = 0; k < l; k++) {
            cin >> matrixB[j][k];
        }
    }
    long long matrixC[n][l] = {0};
        // 行列Cの作成,
            for (int i = 0; i < n; i++) {
        for (int k = 0; k < l; k++) {
            matrixC[i][k] = 0;  // すべての要素を0で初期化
        }
    }
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < l; k++) {
            for (int j = 0; j < m; j++) {
                matrixC[i][k] += matrixA[i][j] * matrixB[j][k];
            }
        }
    }
        // 結果を出力
    for (int i = 0; i < n; i++) {
        for (int k = 0;k < l;k++){
            if (k > 0) cout << " ";
             cout << matrixC[i][k];
        }
        cout << endl;
    }
    return 0;
}