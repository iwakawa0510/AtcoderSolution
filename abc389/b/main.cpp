#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

int main(){ 
    ll x;
    cin >> x;
    
    ll f = 1;
    for(int i = 2;i <= 20;i++){
        f *= i;
        if (f == x) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}