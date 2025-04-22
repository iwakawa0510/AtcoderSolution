#include <iostream> // 標準入出力 (cin, cout, endl) のため
#include <vector>   // vector コンテナのため

// using namespace std; は元のコードに合わせて残します
using namespace std;

int main() {
    int n, m;
    // 標準入力から n と m を読み込む
    cin >> n >> m;

    // a: 各グループの要素を格納するベクターのベクター (m個のグループ)
    vector<vector<int>> a(m);
    // idx: 各要素がどのグループに属するかを格納するベクターのベクター (n個の要素)
    vector<vector<int>> idx(n);
    // cnt: 各グループの残りの要素数をカウントするベクター (m個のグループ)
    vector<int> cnt(m);

    // m個のグループについて処理
    for (int i = 0; i < m; ++i) {
        int k; // グループiの要素数
        cin >> k;
        cnt[i] = k; // グループiの初期要素数を設定
        a[i].resize(k); // グループiのベクターサイズを設定
        // グループiの各要素について処理
        for (auto &e : a[i]) {
            cin >> e; // 要素を読み込む
            e--; // 0-indexed に変換
            idx[e].push_back(i); // 要素eがグループiに属することを記録
        }
    }

    int ans = 0; // 条件を満たしたグループの数
    // n個の要素が順番に提示される処理
    for (int i = 0; i < n; ++i) {
        int b; // 提示された要素
        cin >> b;
        b--; // 0-indexed に変換
        // 提示された要素bが属する各グループについて処理
        for (auto id : idx[b]) {
            cnt[id]--; // そのグループの残り要素数をデクリメント
            // もし残り要素数が0になったら
            if (cnt[id] == 0) {
                ans++; // 条件を満たしたグループ数をインクリメント
            }
        }
        // 現在の条件を満たしたグループ数を出力
        cout << ans << endl;
    }

    // main関数は通常 0 を返して正常終了を示す
    return 0;
}
