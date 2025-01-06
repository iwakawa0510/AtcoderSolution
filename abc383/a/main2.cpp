#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int N;
    int T[110] = {};
    int V[110] = {};

    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> T[i] >> V[i];
    }

    int ans = 0;
    int t_temp = 0;
    const int ans_min = 0;
    for(int i = 0;i < N;i++){
        ans -= (T[i] - t_temp);//前回単位時間と今回単位時間を比較して減算,
        if(ans < ans_min){
            ans = ans_min;//もし負の数になる場合は0に戻す。
        }        
         ans += V[i];//水をindexごとに追加,
         t_temp = T[i];//このループの単位時間を記録,
    }
    cout << ans << endl;
    return 0;
}