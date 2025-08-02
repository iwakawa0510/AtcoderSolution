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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            int d = ((j+1) - (i+1));
            int a_cur = a[i] + a[j];
            if(d == a_cur){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}