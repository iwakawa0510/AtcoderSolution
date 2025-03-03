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
    vector<int> a(n,0);
    for(auto& x : a)cin >> x;
    
    int sum = 0;
    for(int i = 0;i < n-1;i++){
        sum += a[i];
    }
    
    int ans = sum * (-1);
    cout << ans << endl;
    return 0;
}