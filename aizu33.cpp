#include <iostream>
#include <string>
#include <cctype>
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
    // 文章を1単語ずつ処理
    string Ti;
    int cnt = 0;//WとTiの一致数,
    while ( cin >> Ti ){
         // END_OF_TEXT が出たら終了
         if (Ti == "END_OF_TEXT") {
            break;
         }
        // 単語の文字をすべて小文字に変換
         for(int i = 0;i <Ti.size();i++){
          if (isupper(Ti[i])) {
             Ti[i] = tolower(Ti[i]);
          }
        // 最後の文字が記号なら取り除く
          if (!Ti.empty() and ispunct (Ti[Ti.size() - 1])) {
             Ti = Ti.substr(0, Ti.size() - 1);
          }
         }    
        // Wと同じ単語ならカウント
          if (Ti == W)cnt++;    
    }
    
    cout << cnt << endl;
    return 0;         
}       
