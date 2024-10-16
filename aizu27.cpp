#include <iostream>
using namespace std;
//配列が動的な為良い解凍ではない,
int main(){
    //データの初期化,
    int r,c;//行数,列数,
    //サイズの入力,
    cin >> r >> c;
    int table[r][c]{0};//表,
    int sum_row[r]{0};//行合計,
    int sum_col[c]{0};//列合計,
    //入力と計算,
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c;j++){
            //要素の入力,
            cin >> table[i][j];{
              sum_row[i] += table[i][j];
              sum_col[j] += table[i][j];
            }
        }
        
    }
    //行を出力,
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c;j++){
             //要素を出力,
            cout << table[i][j] << " ";
            }
        //行合計を出力,
        cout << sum_row[i] << endl;
    }
    //列合計を出力,
    for(int j = 0; j < c;j++){
        cout << sum_col[j] << " ";
    }
    int total_sum = 0;//行列の合計,
    //最後の列に全ての列の合計を出力
    for(int i = 0; i < r;i++){
        total_sum += sum_row[i];
    }
    cout << total_sum << endl;
return 0;        
}

    
