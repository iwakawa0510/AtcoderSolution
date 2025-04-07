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
    ll n,m;
    cin >> n >> m;

    ll ans = 0;
    ll a_max = 1000000000;
    ll tn = 1;

    for(int i = 0;i <= m;i++){
        ans += tn;
        if(a_max < ans){
            cout << "inf" << endl;
            return 0;
        }
        tn *= n;
    }

    if(ans <= a_max){
        cout << ans << endl;
    }else{
        cout << "inf" << endl;
    }
    return 0;
}