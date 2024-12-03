#include <iostream>
#include <string>
using namespace std;

int main() {
    // 単語Wを入力
    string W;
    cin >> W;

    // Wの文字をすべて小文字に変換
    for (int i = 0; i < W.size(); i++) {
        if (W[i] >= 'A' && W[i] <= 'Z') {
            W[i] = W[i] - ('A' - 'a');
        }
    }

    string word;
    int count = 0;

    // 文章を1単語ずつ処理
    while (cin >> word) {

        // 単語の文字をすべて小文字に変換
        for (int i = 0; i < word.size(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word[i] = word[i] - ('A' - 'a');
            }
        }

        // 最後の文字が記号なら取り除く
        if (word[word.size() - 1] < 'a' || word[word.size() - 1] > 'z') {
            word = word.substr(0, word.size() - 1);
        }

        // Wと同じ単語ならカウント
        if (word == W) {
            count++;
        }
    }

    // 結果を出力
    cout << count << endl;
    return 0;
}
