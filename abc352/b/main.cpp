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

    int m = t.size();
    int i = 0;
    for(int j = 0;j < m;j++){
        if(s[i] == t[j]){
            cout << j+1 << ' ';
            i++;
        }
    }
    cout << endl;
    return 0;
}