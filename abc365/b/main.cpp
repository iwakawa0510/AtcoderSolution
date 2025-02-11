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
    auto B = A;
    sort(B.begin(),B.end());

    int ans;
    int max_second = B[n-2];
    for(int i = 0;i < n;i++){
        if(A[i] == max_second){
            ans = i;
        }
    }
    cout << ans+1 << endl;
    return 0;
}