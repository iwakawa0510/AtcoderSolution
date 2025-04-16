#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
// #include <numeric> // accumulateを使う場合は必要ですが、今回はループで計算します

using namespace std;
using ll = long long;
const int mod_a = 1e9;

int main(){
    int n, m; // n: N, m: K
    cin >> n >> m;
    vector<ll> a(n + 1); // サイズ n+1 (インデックス 0 から n)

    ll cnt = 0; // 実際に1を代入した要素数をカウント

    // 初期化ループ：ベクターの範囲を超えないように修正
    // i < m かつ i <= n の間だけループを実行する
    for (int i = 0; i < m && i <= n; i++) {
        a[i] = 1;
        cnt++; // 1を代入した数をカウント
    }

    // スライディングウィンドウの初期合計値 's' を設定
    // m ではなく、実際に1を代入した要素数を使う
    ll s = cnt;
    // s %= mod_a; // cnt <= n+1 <= 10^6+1 なので mod_a より小さいが、念のため

    // 計算ループ：このループは m <= n の場合のみ実行される
    // ループ条件 i < n+1 は i <= n と同じ意味
    for (int i = m; i <= n; i++) {
        a[i] = s; // 現在の合計値が A[i]
        s -= a[i - m]; // ウィンドウから外れる最も古い要素を引く
        s += a[i];   // ウィンドウに加わる新しい要素を足す

        // 合計値 s が負にならないように剰余を計算
        s %= mod_a;
        if (s < 0) { // C++の % 演算子は負数を返すことがあるため
            s += mod_a;
        }
        // より安全な書き方: s = (s % mod_a + mod_a) % mod_a;
    }

    // 結果を出力
    // n < m の場合、a[n] は最初のループで 1 に設定されている
    // n >= m の場合、a[n] は計算ループで計算されている
    cout << a[n] << endl;

    return 0;
}
