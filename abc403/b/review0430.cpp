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
    string t,u;
    cin >> t >> u;
    for(int i = 0;i <= t.size();i++){
        bool ok = true;
        for(int j = 0;j < u.size();j++){
            if(t[i+j] != '?' && t[i+j] != u[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}