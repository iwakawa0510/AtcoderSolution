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
    int n,q;
    cin >> n >> q;
    
    vector<int> pc_v;
    for(int i = 1;i <= n;i++){
        pc_v.push_back(i);
    }
    
    for(int i = 0;i < q;i++){
        int ans = 0;
        int x,y;
        cin >> x >> y;
        int j = n;
        while(j--){
            if(x >= pc_v[j]){
                pc_v[j] = y;
                ans++;
            }
            sort(pc_v.begin(),pc_v.end());
            j = lower_bound(pc_v.begin(),pc_v.end(),x);
        }
        cout << ans << endl;
    }
    return 0;
}