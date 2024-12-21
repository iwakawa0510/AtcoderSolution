#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main() {
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    // マス目の入力
    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    // 開始位置の調整
    X--; 
    Y--;

    string T;
    cin >> T;

    // 訪問済みの家の管理
    set<pair<int, int>> visited_houses;

    // 開始位置が家なら記録
    if (S[X][Y] == '@') {
        visited_houses.insert({X, Y});
    }

    // 移動方向の定義
    int dx[] = {-1, 1, 0, 0}; // U, D, L, R
    int dy[] = {0, 0, -1, 1};
    string directions = "UDLR";

    // 移動処理
    for (char move : T) {
        int dir = directions.find(move);
        int nx = X + dx[dir];
        int ny = Y + dy[dir];

        // 移動可能性の判定
        if (nx >= 0 && nx < H && ny >= 0 && ny < W && S[nx][ny] != '#') {
            X = nx;
            Y = ny;
            if (S[X][Y] == '@') {
                visited_houses.insert({X, Y});
            }
        }
    }

    // 結果の出力
    cout << X + 1 << " " << Y + 1 << " " << visited_houses.size() << endl;

    return 0;
}
