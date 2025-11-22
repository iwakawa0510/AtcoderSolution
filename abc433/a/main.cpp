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
    int x,y,z;
    cin >> x >> y >> z;
    while((x/z) >= y){
        if(x == (y*z)){
            cout << "Yes" << endl;
            return 0;
        }
            x++;
            y++;
    }
    cout << "No" << endl;
    return 0;
}