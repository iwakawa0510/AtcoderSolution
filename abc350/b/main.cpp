#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n,m;
    cin >> n >> m;
    vector<int> t(m);
    for(auto& x:t)cin >> x;
    
    vector<bool> t2(n+1);
    for(int i = 1;i <= n;i++){
        t2[i] = true;
    }
    for(int i = 0;i < m;i++){
        t2[t[i]] = !t2[t[i]];
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        if(t2[i])ans++;
    }
    
    cout << ans << endl;
    return 0;
}