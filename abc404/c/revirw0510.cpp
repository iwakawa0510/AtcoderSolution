#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
int n,m,x,y,i;
vector<int> a(1000007),f(1000007);
int z(int x){
    return x == f.at(x) ? x : f.at(x) = z(f.at(x));
}
int main(){ 
    cin >> n >> m;
    for(i = 1;i <= n;i++){
        f[i] = i;
    }
    while(m--){
        cin >> x >> y;
        ++a.at(x);
        ++a.at(y);
        x = z(x);
        y = z(y);
        if(x - y) f[x] = y;
        
    }
    for(i = 1;i <= n;i++){
        if(a[i] - 2 || z(i) != z(1)){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}