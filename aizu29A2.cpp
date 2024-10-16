#include <iostream>
using namespace std;

int main() {
    char c;
    
    // 1文字ずつ入力がなくなるまで読み込む
    while (cin.get(c)) {
        // 大文字から小文字へ
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }
        // 小文字から大文字へ
        else if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A');
        }
        // 結果をそのまま出力
        cout << c;
    }
    
    return 0;
}
