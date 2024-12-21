#include <iostream>     // 標準入出力に使用
#include <vector>       // 動的配列(std::vector)に使用
#include <string>       // 文字列(std::string)に使用
#include <set>          // 重複排除可能な集合(std::set)に使用


using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y; // グリッドのサイズ(n, m)と初期座標(x, y)を入力
    --x, --y; // 1-based indexを0-based indexに変換

    vector<string> grid(n); // n行分の文字列を格納する動的配列
    for (int i = 0; i < n; i++) {
        cin >> grid[i]; // 各行の文字列を入力
    }

    string t; 
    cin >> t; // 動きの指示文字列を入力

    set<pair<int, int>> memo; // 訪問済みの座標を重複なく記録する集合
    if (grid[x][y] == '@') memo.insert(pair(x, y)); // 初期位置が「@」なら座標を記録

    for (char c : t) { // 指示文字列を1文字ずつ処理
        int nx = x, ny = y; // 新しい座標(nx, ny)を初期化
        if (c == 'L') ny--; // 左移動
        else if (c == 'R') ny++; // 右移動
        else if (c == 'U') nx--; // 上移動
        else if (c == 'D') nx++; // 下移動

        // 新しい座標がグリッド内に収まり、かつ障害物でない場合
        if (0 <= nx && nx < n && 0 <= ny && ny < m && grid[nx][ny] != '#') {
            x = nx, y = ny; // 現在の座標を更新
            if (grid[x][y] == '@') memo.insert(pair(x, y)); // 新しい位置が「@」なら記録
        }
    }

    // 最終的な位置(1-based indexに戻す)と、訪問した「@」の数を出力
    cout << x + 1 << ' ' << y + 1 << ' ' << memo.size();
    return 0;
}
