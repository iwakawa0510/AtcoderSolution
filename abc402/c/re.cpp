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
    vector<vector<int>> a(n,vector<int>(n));
    vector<int> b;
    int ans = 0;
    int k_max = 0;
    for(int i = 0;i < m;i++){
        int k;
        cin >> k;
        if(k > k_max)k_max = k;

        for(int j = 0;j < k;j++){
            cin >> a[i][j];
                }
    }
    
    for(int i = 0;i < n;i++){
        cin >> b[i];
        bool food =false;
        for(int j = 0;j < a.at(0).size();j++){
            if(a[i][j] == b[i]){
                food = true;
            }else{
                food = false;
            }
        }
        if(food)ans++;
        cout << ans << endl;
    }

    
    return 0;
}