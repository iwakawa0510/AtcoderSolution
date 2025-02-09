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
    vector <int> A(m);
    for(int i = 1;i <= m;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());

    //1~nのベクター,
    vector <int> X(n);
    for(int i = 1;i <= n;i++){
        X[i] = i;
        if(i == A.at(i))X.remove(X.at(i));
    }
    X.erase(result, X.end());

    int ans_size = (n-m);
    cout << ans_size << endl;

    if(ans_size == 0){
    cout << " ";
    return 0;
    }
    for(int i = 1;i <= X.size();i++){        
        cout << X[i] << " ";
    }
    return 0;
}