#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    string d;
    cin >> d;
    string ans;
    //関数化出来る?,
    if(d.at(0) == 'N'){
       ans.push_back('S');
    }
    else if(d.at(0) == 'E'){
       ans.push_back('W');
    }
    else if(d.at(0) == 'W'){
       ans.push_back('E');
    }
    else if(d.at(0) == 'S'){
       ans.push_back('N');
    }

    if(d.size() == 1){
        cout << ans << endl;
        return 0;
    }

    if(d.at(1) == 'N'){
       ans.push_back('S');
    }
    else if(d.at(1) == 'E'){
       ans.push_back('W');
    }
    else if(d.at(1) == 'W'){
       ans.push_back('E');
    }
    else if(d.at(1) == 'S'){
       ans.push_back('N');
    }

    cout << ans << endl;        
    return 0;
}