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
    string x;
    cin >> x;
    sort(x.begin(),x.end());
    int i = 1;
    while(x[0] == '0'){
        char t = x[i];
        x[0] = t;
        x[i] = '0';
        i++;
    }
    cout << x << endl;
    
    return 0;
}