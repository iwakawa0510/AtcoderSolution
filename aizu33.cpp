#include <iostream>
#include <string>
using namespace std;

int main() {
    //単語Wを入力,
    string W;
    cin >> W;

    //文章を文字列Tに格納,
    string T;//文字列T,
    char input_ch;
    int input_cnt = 0;//入力ループ用カウンタ,
    while ( cin >> input_ch ){
        //アルファべットか判定,
        if ((input_ch >= 'a' && input_ch <= 'z') or (input_ch >= 'A' && input_ch <= 'Z')) {           
        // 大文字を小文字に変換,
         if (input_ch >= 'A' && input_ch <= 'Z') {
            input_ch = input_ch + ('a' - 'A');
            string T[input_cnt] =+ input_ch;        
         }
        }
        input_cnt++;
    }
    //単語Wと等しいTiを探索する。
    int cnt = 0;
    for(int i = 0; i <= input_cnt;i++){
        if(string T[i] == string W ){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;         
}
