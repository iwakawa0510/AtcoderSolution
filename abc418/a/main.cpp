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
    int n;
    cin >> n;
    if(n < 3){
        cout << "No" << endl;
        return 0;
    }
    int m = n-3;
    string s;
    string t ="tea";
    cin >> s;
    int i = 0;
    for(int j = m;j < n;j++){
        if(!(s[j] == t[i])){
            cout << "No" << endl;
            return 0;
        }
        i++;
    }
    cout << "Yes" << endl;
    return 0;
}