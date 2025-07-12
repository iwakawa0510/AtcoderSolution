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
    int n,r,l;
    int ans = 0;
    cin >> n >> r >> l;
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        if(x <= r && y >= l){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}