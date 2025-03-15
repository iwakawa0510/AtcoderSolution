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
    float n;
    cin >> n;
    
    if(n >= 37.5){
        if(n >= 38.0){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }else{
        cout << 3 << endl;
    }
    return 0;
}