#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

int main(){ 
    int n,m;
    cin >> n >> m;

    ll ans = 1;
    ll a_max = 1000000000;
    ll tn = 0;

    for(int i = 0;i < m;i++){
        if(m < 2){
            ans = 1+n;
            break;
        }
        if(i == 0){
            continue;
        }
        if(i == 1){
            tn = n;
            ans += tn;
            if(m < 2)continue;
        }
        tn = tn*n;
        ans += tn;
    }

    if(ans <= a_max){
        cout << ans << endl;
    }else{
        cout << "inf" << endl;
    }
    return 0;
}