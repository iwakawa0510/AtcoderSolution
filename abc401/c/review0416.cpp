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

const int mod = 1e9;

int main(){ 
    //入力,
    int n,m;
    cin >> n >> m;
    //前処理,
    vector<ll> a(n+1);
    ll s;
    for(int i = 0;i < m;i++){
        a[i] = 1;
    }
    s = m;
    //実装,
    for(int i = m;i < n+1;i++){
        a[i] = s;
        s -= a[i-m];
        s += a[i];
        s = (s + mod)%mod;
    }
    cout << a[n] << endl;
    return 0;
}