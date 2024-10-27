#include <iostream>
#include <string>
using namespace std;

int main(){
    int tarou_cnt = 0;//太郎のポイント,
    int hanako_cnt = 0;//花子のポイント,
    const int winner_point =3;//勝者に加算,
    int n;//ループ回数,
    cin >> n;
    for (int i = 0; i < n;i++){
        string str_t,str_h;
        cin >> str_t >> str_h;
        if (str_t == str_h){
            tarou_cnt++;
            hanako_cnt++;//引き分け処理,

        }else if(str_t > str_h){
            tarou_cnt += winner_point;
        }else if(str_t < str_h){
            hanako_cnt += winner_point;
        }
        
    }
    cout << tarou_cnt << " " << hanako_cnt << endl;
    return 0;
}