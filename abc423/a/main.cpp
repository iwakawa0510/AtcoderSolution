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
    double x,c;
    cin >> x >> c;
    double t = x;
    double u = c/1000;
    while(true){
        if(x>=(t+(t*u)) && t >= 1000){
            break;         
        }
        t -= 1000;
        if(t <= 0){
            t = 0;
            break;
        }
    }
    
    int ans = t;
    cout << ans << endl;
    return 0;
}