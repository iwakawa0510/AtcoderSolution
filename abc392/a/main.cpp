#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    vector <int> A(3);

    for(int i = 0;i < 3;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    if((A[0]*A[1]) == A[2]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}