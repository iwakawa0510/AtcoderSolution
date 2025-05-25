#include <iostream>
#include <string>
// 必要最小限のライブラリをインクルードします。
// ans.cppのロジックに基づき、<string>を追加し、
// main.cppにあった他の不要なライブラリは削除します。
using namespace std;

int main(){ 
    string s;
    cin >> s;

    int sum = 0;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        int v = s[i] - '0';
        // ans.cppのロジックに従い、次の桁の数値を取得。範囲外なら0とする。
        int u = ((i < n - 1) ? (s[i + 1] - '0') : 0);
        int b = (10 + v - u) % 10;
        sum += b;
    }

    int ans = sum + n;
    cout << ans << endl; // main.cppのスタイルに合わせてendlを使用

    return 0;
}