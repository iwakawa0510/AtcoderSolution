#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){ 
    string s;
    cin >> s;
    int n = stoi(s.substr(3,4));
    
    if(0 < n && n < 350 && n != 316){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}