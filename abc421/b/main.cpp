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
    ll x,y;
    ll ans;
    cin >> x >> y;
    for(int i = 0;i < 8;i++){
        ll t = (x + y);
        string s = to_string(t);
        reverse(s.begin(),s.end());
        t = stoll(s);
        x = y;
        y = t;
        if(i == 7){
            ans = t;
        }
    }
    cout << ans << endl;
    return 0;
}