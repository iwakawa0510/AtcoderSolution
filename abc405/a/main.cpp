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
    int r,x;
    cin >> r >> x;
    if(x == 1){
        if(1600 <= r && r <= 2999){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
        return 0;
    }else if(x == 2){
        if(1200 <= r && r <= 2399){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}