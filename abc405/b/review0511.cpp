#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){ 
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        a[i]--;
    }
    int ans = 0;
    while(true){
        vector<bool> e(m);
        for(int i:a)e[i] = true;
        bool ok = false;
        for(bool b:e){
            if(!b) ok = true;
        }
        if(ok)break;
        ans++;
        a.pop_back();
    }
    cout << ans << endl;
    return 0;
}