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
    if(c > a){
        cout << "No\n";
        return 0;
    }else{
        if(b > d){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}