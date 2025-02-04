#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < (i+1);j++){
            cin >> a[i][j];
            a[i][j]--;
            a[j][i] = a[i][j];
        }
    }
    int ans = 0;
    for(int i = 0;i < n;i++){
        ans = a[ans][i];
    }
    ans += 1;
    cout << ans << endl;
    return 0;
}