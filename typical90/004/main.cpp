#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    //入力,
    int H,W;
    cin >> H >> W;
    vector<vector<int>> A(H,vector<int>(W));
    for(int i = 0;i < H;i++){
        for(int j = 0;j < W;j++){
            cin >> A[i][j];
        }
    }

    //前処理,
    vector<int> row(H, 0);
    vector<int> column(W, 0);
    for(int i = 0;i < H;i++){
        for(int j = 0;j < W;j++){
            row[i] += A[i][j];
            column[j] += A[i][j];
        }
    }
    
    //出力,
    for(int i = 0;i < H;i++){
        for(int j = 0;j < W;j++){
            cout << row[i] + column[j] - A[i][j] << " ";
        }
        cout << endl;//W文字目で改行,
    }
    return 0;
}