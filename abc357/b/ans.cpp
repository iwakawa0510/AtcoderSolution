#include <iostream>
using namespace std;

int main(){ 
    string str;
    cin >> str;
    int cnt_u = 0, cnt_l = 0;

    // 修正点: 判定条件を逆にする
    for (char c : str) {
        if (c < 'a') { // 'a' より小さいなら大文字
            cnt_u++;
        } else {
            cnt_l++;
        }
    }

    if (cnt_u > cnt_l) {
        for (char& c : str) {
            if (c >= 'a') c -= ('a' - 'A'); // 修正点: 'A' 未満ではなく 'a' 以上をチェック
        }
    } else {
        for (char& c : str) {
            if (c < 'a') c += ('a' - 'A'); // 修正点: 'A' より大きいではなく 'a' 未満をチェック
        }
    }

    cout << str << endl;
    return 0;
}
