#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <cctype>

using namespace std;

int main(){ 
    string s,t;
    cin >> s >> t;
    for(int i = 1;i < s.size();i++){
        if(isupper(s.at(i))){
            for(int j = 0;j < t.size();j++){
                if(s.at(i-1) == t.at(j)){
                    break;
                }
                if(j == (t.size()-1)){
                    cout << "No" << endl;
                return 0;
                }
            }
        }
    }cout << "Yes" << endl;
    return 0;
}