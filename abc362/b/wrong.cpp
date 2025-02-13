#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int xa,ya,xb,yb,xc,yc;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xc >> yc;
    int a = abs(max(xa,ya) - min(xa,ya));
    int b = abs(max(xb,yb) - min(xb,yb));
    int c = abs(max(xc,yc) - min(xc,yc));
    cout << a << b << c;
    return 0;
    if(((a*a) + (b*b)) == (c*c)){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}