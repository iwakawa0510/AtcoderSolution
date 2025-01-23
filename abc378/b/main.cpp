#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    //入力,
    int n,m;
    cin >> n;
    int q[110] = {};
    int r[110] = {};
    for(int i = 0;i <= n;i++){
        if(i == 0)continue;
        cin >> q[i] >> r[i];
    }
    cin >> m;    
    while(m--){
    int t,d;
    cin >> t >> d;
    t--;
    int b = d / q[t], c = d % q[t];
    int a = c <= r[t] ? b : b + 1;
    int ans = a * q[t] + r[t];
    cout << ans << endl;
    }
    return 0;
}