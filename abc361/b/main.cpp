#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;
struct Point{
    int x,y,z;
};
Point input(){
    Point p;
    cin >> p.x >> p.y >> p.z;
    return p;
}

bool ans(){    
    Point l1 = input();
    Point r1 = input();
    Point l2 = input();
    Point r2 = input();
    if(r1.x <= l2.x || r2.x <= l1.x) return false;
    if(r1.y <= l2.y || r2.y <= l1.y) return false;
    if(r1.z <= l2.z || r2.z <= l1.z) return false;
    return true;
}
int main(){ 
    if(ans())cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}