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
    vector<int> a(n+1);
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int l = 1;l <= n;l++){
        for(int r = l+1;r <= n;r++){
            int sum = 0;
            for(int i = l;i <= r;i++){
                sum += a[i];
            }
            cout << "index:"<< l <<" "<<  r << endl;
            cout << sum << " " << sum%a[l]  << " " << sum%a[r] << endl;        
            if(sum%a[l] != 0 && sum%a[r] != 0){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}