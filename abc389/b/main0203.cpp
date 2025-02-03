#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

int main(){ 
    ll x;
    cin >> x;

    int ans;
    for(int i = 2;i <= 20;i++){
        ll f = 1;
        for(int j = 1;j <= i;j++){
            f *= j;            
        }
        if(f == x){
                cout << i << endl;
                break;
        }
    }
    return 0;
}