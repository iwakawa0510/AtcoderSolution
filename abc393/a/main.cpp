#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    string s,t;
    cin >> s >> t;
    if(s == "sick" && t == "sick"){
        cout << 1 << endl;
    }else if(s == "fine" && t == "sick"){
        cout << 3 << endl;
    }else if(s == "sick" && t == "fine"){
        cout << 2 << endl;
    }else if(s == "fine" && t == "fine"){
        cout << 4 << endl;
    }
    return 0;
}