#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    string s;
    cin >> s;
    int n = s.size();
    int cnt2 = 0;
    for(int i = 0;i < n;i++){
        if(s.at(i) == '2'){
        cnt2++;
        }

    }
    for(int i = 0;i < cnt2;i++){
        cout << '2';
    }
    return 0;
}