#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n,k,a;
    cin >> n >> k;
    int ans; 
    for(int i = 0;i < n;i++){
        cin >> a;
        if(a % k == 0){
            ans = a/k;
            cout << ans << " ";
        }
    }
    cout << endl;
    return 0;
}