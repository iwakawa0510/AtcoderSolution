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
    vector<int> A(m);
    vector<char> B(m);
    for(int i = 0;i < m;i++){
        cin >> A[i] >> B[i];
    }
    vector<bool> taro (n+1,false);
    for(int i = 0;i < m;i++){
        if(B[i] = (B[i] == 'M')){
           if(taro[A[i]]){
            cout << "No" << endl;
           }else{
            cout << "Yes" << endl;
            taro[A[i]] = true;
           }
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}