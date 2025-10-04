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
    vector<int> pc_v(n+1,1);
    pc_v[0] = 0;
    int old = 1;
    while(q--){
        int x,y;
        cin >> x >> y;
        int ans = 0;
        while(old <= x){
            ans += pc_v[old];
            pc_v[y] += pc_v[old];
            old++;
        }
        cout << ans << endl;
    }
    return 0;
}