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
    int n,k;
    cin >> n >> k;
    ll a;
    ll ans = 1;
    ll y = 1;
    
    for(int i = 0;i < k;i++){
        y *= 10;
    }
    y--;
    for(int i = 0;i < n;i++){
        cin >> a;
        if(ans > y/a){
            ans = 1;
        }else{
            ans *= a;
        }
    }
    cout << ans << endl;
    return 0;
}