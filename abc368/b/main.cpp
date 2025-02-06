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
    vector<int> A(n);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    
    int ans = 0;
    while(true){
        sort(A.begin(),A.end(),greater<int>{});
        if(A[1] <= 0)break;
        
        A[0]--;
        A[1]--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}