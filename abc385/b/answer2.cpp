#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() { 
    int H, W, x, y;
    cin >> H >> W >> x >> y;
    x--; // 0-based index に変換
    y--;
    
    char S[H][W] = {}; 
    string T;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }
    cin >> T;

    int count = 0; // @を訪れた数
    int T_length = T.length();

    // 移動方向の定義
    int dx[4] = {-1, 1, 0, 0}; // 上、下、左、右
    int dy[4] = {0, 0, -1, 1};
    string directions = "UDLR";

    for (int i = 0; i < T_length; i++) {
        // 移動方向を特定
        int dir = directions.find(T[i]);
        if (dir == string::npos) continue; // 無効な入力は無視

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        // 境界チェック
        if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;

        // 移動先が壁でなければ移動
        if (S[nx][ny] == '@' || S[nx][ny] == '.') {
            if (S[nx][ny] == '@') {
                count++;
                S[nx][ny] = '.'; // 訪問済みにする
            }
            x = nx;
            y = ny;
        }
    }

    cout << x + 1 << " " << y + 1 << " " << count << endl; // 1-based indexに戻して出力
    return 0;
}
