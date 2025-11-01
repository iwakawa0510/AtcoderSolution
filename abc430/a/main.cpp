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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a <= c){
        if(b <= d){
            cout << "No" << endl;
            return 0;
        }else{
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}