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
    int n = 0;
    int m = 0;
    string x,y;
    cin >> x >> y;
    if(x == "Ocelot"){
        n = 0;
    }else if(x == "Serval"){
        n = 1;
    }else if(x == "Lynx"){
        n = 2;
    }

    if(y == "Ocelot"){
        m = 0;
    }else if(y == "Serval"){
        m = 1;
    }else if(y == "Lynx"){
        m = 2;
    }

    if(n >= m){
        cout << "Yes" << endl;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}