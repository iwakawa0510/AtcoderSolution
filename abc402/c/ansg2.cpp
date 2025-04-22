#include <iostream> // 標準入出力 (cin, cout, '\n') のため
#include <vector>   // vector コンテナのため

// using namespace std; は元のコードに合わせて残します
using namespace std;

// マクロ定義は削除します
// #define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  // 標準入力から n と m を読み込む
  cin >> n >> m;

  // menuList: 各要素がどのグループに属するかを格納するベクターのベクター (n個の要素)
  vector<vector<int>> menuList(n);
  // cnt: 各グループの残りの要素数をカウントするベクター (m個のグループ)
  vector<int> cnt(m);
  int ans = 0; // 条件を満たしたグループの数

  // m個のグループについて処理 (rep(i,m) を展開)
  for (int i = 0; i < m; ++i) {
    int k; // グループiの要素数
    cin >> k;
    cnt[i] = k; // グループiの初期要素数を設定
    // グループiの各要素について処理 (rep(j,k) を展開)
    for (int j = 0; j < k; ++j) {
      int a; // 要素
      cin >> a;
      a--; // 0-indexed に変換
      menuList[a].push_back(i); // 要素aがグループiに属することを記録
    }
  }

  // n個の要素が順番に提示される処理 (rep(i,n) を展開)
  for (int i = 0; i < n; ++i) {
    int b; // 提示された要素
    cin >> b;
    b--; // 0-indexed に変換
    // 提示された要素bが属する各グループについて処理 (範囲for文はそのまま)
    for (int j : menuList[b]) {
      cnt[j]--; // そのグループの残り要素数をデクリメント
      // もし残り要素数が0になったら
      if (cnt[j] == 0) {
          ans++; // 条件を満たしたグループ数をインクリメント
      }
    }
    // 現在の条件を満たしたグループ数を出力
    cout << ans << '\n'; // '\n' は endl とほぼ同じだが、通常より高速
  }

  // main関数は 0 を返して正常終了を示す
  return 0;
}
