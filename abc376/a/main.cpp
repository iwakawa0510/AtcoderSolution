#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int N,C;
    cin >> N >> C;
    int T[110];
    for(int i = 0;i < N;i++){
        cin >> T[i];
    }
    int ans = 0;
    int temp = 0; 
    for(int i = 0;i < N;i++){
        if(0 < i){
        if((T[i] - temp) < C){
        }else{
            ans++;
            temp = T[i];
        }
        }else{
            ans++;
            temp = T[i];
        }
    }    
    cout << ans << endl;
    return 0;
}