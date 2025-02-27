#include <iostream>
#include <string>
using namespace std;

int main(){ 
    string s, t;
    cin >> s >> t;
    
    int m = s.size();
    int n = t.size();
    int last_pos = 0;  // t内の検索開始位置

    for(int i = 0; i < m; i++){  // sの文字を順に処理
        for(int j = last_pos; j < n; j++){  // tの文字を順に調べる
            if(s[i] == t[j]){  // s[i] に対応する t[j] を見つけたら
                cout << j + 1 << ' ';  // 1オリジンのインデックスを出力
                last_pos = j + 1;  // 次回の探索開始位置を更新
                break;  // この s[i] の探索は終了し、次の s[i+1] へ
            }
        }
    }
    cout << endl;
    return 0;
}
