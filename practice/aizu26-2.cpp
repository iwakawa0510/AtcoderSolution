#include <iostream>
using namespace std;

int main(){
int n,x=0;
    while(true){

        //入力処理,
        cin >> n >> x;
        //終了条件,
        if(n == 0 and x == 0){
            break;
            }
        
        //組み合わせの数,
        int count = 0;
        //全探索,
        for(int i = 1; i <= n-2;i++){
            for(int j = i+1; j <= n-1;j++){
                for(int k = j+1; k <= n;k++){
                if(i + j + k == x){count++;}
                }
            }
        }
    cout << count << endl;
    }
    return 0;
}