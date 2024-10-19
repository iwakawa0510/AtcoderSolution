#include <iostream>
#include <string>
using namespace std;

int main() {
    string W ;
    // 単語Wを入力
    cin >> W;
    // Wの文字をすべて小文字に変換
    for(int i = 0;i < W.size();i++){
         if (isupper(W[i])) {
            W[i] = tolower(W[i]); // 大文字を小文字に変換
         }
    } 
    cout << W << endl;
    // 文章を1単語ずつ処理
    string Ti;
    int cnt = 0;//WとTiの一致数,
    while ( cin >> Ti ){
        
        // 単語の文字をすべて小文字に変換
         for(int i = 0;i <Ti.size();i++){
          if (isupper(Ti[i])) {
             Ti[i] = tolower(Ti[i]);
          }
        // 最後の文字が記号なら取り除く
          if (ispunct(Ti.back())) {
             Ti.pop_back();
          }
          // Wと同じ単語ならカウント
          if (Ti == W)cnt++;
         }        
    }
    cout << cnt << endl;
    return 0;         
}       
