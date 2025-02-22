#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){  
    int n,m;
    cin >> n >> m;
    vector<vector<int>> X(n,vector<int>(m)); 
    vector<int> A(m),B(m);
    for(int i = 0;i < m;i++){
        cin >> A[i];
        B[i] = 0;
    }
    for(int i = 0;i < n;i++){
        for(int j= 0;j < m;j++){
            cin >> X[i][j];
            B[j] += X[i][j];
        }
    }
    
    for(int i = 0;i < m;i++){
        if(B[i] < A[i]){
        cout << "No" << endl;
        return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}