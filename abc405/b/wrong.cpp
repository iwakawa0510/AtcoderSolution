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
    vector<int> a(n),num(m+1,0);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        num[a[i]]++;
    }
    
    int ans = 0;
    bool ok = false;
    for(int i = 0;i < n;i++){
        if(ok)break;
        num[a.back()]--;
        a.pop_back();
        for(int j = 1;j <= m;j++){
            if(num[j] <= 0){
                ok = true;
                break;
            }
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}