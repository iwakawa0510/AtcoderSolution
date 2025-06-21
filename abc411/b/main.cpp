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
    cin >>n;
    vector<int>sta (n);
    for(int i = 1;i <= n-1;i++)cin >> sta[i];

    for(int i = 1;i <= n-1;i++){
        int ans = 0;
        for(int j = i;j <= n-1;j++){
            if(i){
                ans += sta[j];
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}