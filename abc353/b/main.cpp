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
    vector <int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int ans = 0;
    int e = m;
    for(int i = 0;i < n;i++){
        if(e < a[i]){
            ans++;
            e = m;
        }
        e -= a[i];
    }
    ans++;

    cout << ans << endl;
    return 0;
}