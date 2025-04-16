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
const int mod_a = 1e9;

int main(){ 
    int n,m;
    cin >> n >> m;
    vector<ll> a(n+1);
    for(int i = 0;i < m;i++){a[i] = 1;
    }
    ll s = m;
    for(int i = m;i < n+1;i++){
        a[i] = s;
        s -= a[i-m];
        s += a[i];
        s = (s + mod_a)%mod_a;
    }
    cout << a[n] << endl;
    return 0;
}