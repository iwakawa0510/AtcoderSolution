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
    
    string s;
    cin >> s;

    int ans = n;
    for(int i = 0;i < n;i++){
        int sum_min = 0;
        for(int j = 0;j < n;j++){
            if(i == j)continue;
            if(i > j && s[j] != 'W'){
                sum_min++;
            }else if(i < j && s[j] != 'E'){
                sum_min++;
            }
        }
        ans = min(ans,sum_min);
    }
    cout << ans << endl;
    return 0;
}