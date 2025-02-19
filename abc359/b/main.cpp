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
    int m = n*2;
    vector <int> A(m);
    for(int i = 0;i < m;i++){
        cin >> A[i];
    }
    int ans = 0;
    for(int i = 0;i < (m-2);i++){
        if(A[i] == A[i+2])ans++;
    }
    
    cout << ans << endl;
    return 0;
}