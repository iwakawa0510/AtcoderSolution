#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    for(int i = 0;i < n;i++){
        if(i < 2)continue;
        if(!(A.at(i)%A.at(i-1) == 0)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}