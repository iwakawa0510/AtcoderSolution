#include <iostream>
using namespace std;

int main(){
    int n, b, f, r, v;
    cin >> n;
    int residents[4][3][10] = {0}; // 全ての部屋を0で初期化

    // 入力処理
    for(int i = 0; i < n; i++){
        cin >> b >> f >> r >> v;
        residents[b-1][f-1][r-1] += v; // インデックス調整
    } 

    // 出力処理
    for(int i = 0; i < 4; i++){ // 4棟
        for(int j = 0; j < 3; j++){ // 3階
            for(int k = 0; k < 10; k++){ // 10部屋
                cout << " " << residents[i][j][k];
            }
            cout << endl;
        }
        if(i < 3) { // 最後の棟の後には区切り線を出力しない
            cout << "####################" << endl;
        }
    }

    return 0;
}
