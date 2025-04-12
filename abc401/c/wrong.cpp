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
    vector<int> a(n,0);
    vector<int> s(n+1, 0);
    for(int i = 0;i < n;i++){
        if(0 <= i < m)a[i] = 1;
    }

    for(int i = 0;i < n;i++){
        if(m <= i){
            for(int j = (i - m);j < i;j++){
                a[i] = s[j] + a[j];
            }
        }
        // cout << a[i] << endl;
    }
    int mod_a = 1000000000;
    int ans = a[n]%mod_a;
    
    cout << ans << endl;
    return 0;
}