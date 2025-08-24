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
    string s;
    cin >> s;
    if(s == "red"){
        cout << "SSS" << endl;
    }else if(s == "blue"){
        cout << "FFF" << endl;
    }else if(s == "green"){
        cout << "MMM" << endl;
    }else{
        cout << "Unknown" << endl;
    }
    return 0;
}