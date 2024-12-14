#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    int X; 
    cin >> A >> B >> C >> X;
    
    int answer = 0;//カウンター,

    int diff_X = 0;
    //コイン作成,
    const int coin_A = 500;
    const int coin_B = 100;
    const int coin_C = 50;
    //全探索,
    for(int i = 0;i <= A;i++){
        for(int j = 0;j <= B;j++){
            diff_X = X - (coin_A*i) - (coin_B*j);
            if(diff_X <= 0 and diff_X <= coin_C*C and diff_X % coin_C == 0){
                answer++;
            }            

        }
    }
    cout << answer << endl;
    return 0;
}