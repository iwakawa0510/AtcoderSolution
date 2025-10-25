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
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    bool ok = false;   
    for(int i = 0;i < n;i++){
        int sum = 0;
        for(int j = 0;j < n;j++){
            if(i == j){
                continue;
            }
            sum += a[j];
        }
        if(sum == m){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}