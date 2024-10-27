#include <iostream>
#include <string>
#include <algorithm> // reverse用
using namespace std;

int main() {
    // 文字列strを読み込む
    string str;
    cin >> str;

    // 命令数を読み込む
    int q;
    cin >> q;

    // 命令名や範囲指定の変数を宣言
    string instruction_name;
    int a, b;

    // 命令を処理する
    for (int i = 0; i < q; i++) {
        cin >> instruction_name >> a >> b;

        if (instruction_name == "print") {
            // print命令: strのa文字目からb文字目までを出力
            cout << str.substr(a, b - a + 1) << endl;

        } else if (instruction_name == "reverse") {
            // reverse命令: strのa文字目からb文字目までを逆順にする
            reverse(str.begin() + a, str.begin() + b + 1);

        } else if (instruction_name == "replace") {
            // replace命令: strのa文字目からb文字目までを置き換える
            string p;
            cin >> p;
            str.replace(a, b - a + 1, p);
        }
    }

    return 0;
}
