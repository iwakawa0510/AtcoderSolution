#include <iostream>

using namespace std;
using ll = unsigned long long;

int main(){ 
    int n,k;
    ll a;
    ll ans = 1;
    ll y = 1;
    cin >> n >> k;
    for(int i = 0;i < k;i++){
        y *= 10;
    }
    y--;
    for(int i = 0;i < n;i++){
        cin >> a;
        if(ans > (y/a)){
            ans = 1;
        }else{
            ans *= a;
        }
    }
    cout << ans << endl;

    return 0;
}