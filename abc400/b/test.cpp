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
    ll tn = 0;

    for(int i = 0;i <= m;i++){
        if (i == 0) {
            tn = 1;
            ans = tn;
        } else {
            tn *= n;
            ans += tn;
        }
    }

    if(ans <= a_max){
        cout << ans << endl;
    }else{
        cout << "inf" << endl;
    }
    return 0;
}