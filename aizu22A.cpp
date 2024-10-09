#include <iostream>
using namespace std;

int main(){
    bool trump[4][13] = {false};
    int n;
    cin >> n;


    char suit;
    int rank;
    for(int i = 0; i <= n; i++){
    cin >> suit >> rank;
    int suit_index = 0;
        if (suit == 'S') suit_index = 0; // スペード
        else if (suit == 'H') suit_index = 1; // ハート
        else if (suit == 'C') suit_index = 2; // クラブ
        else if (suit == 'D') suit_index = 3; // ダイヤ
    
         trump[suit_index][rank - 1] = true;
    }
        for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (!trump[i][j]) {  // カードが存在しない場合
                char output_suit;
                if (i == 0) output_suit = 'S'; // スペード
                else if (i == 1) output_suit = 'H'; // ハート
                else if (i == 2) output_suit = 'C'; // クラブ
                else if (i == 3) output_suit = 'D'; // ダイヤ

                cout << output_suit << " " << (j + 1) << endl;  // ランクはインデックス+1
            }
        }
    }
return 0;       
}