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
    string p;
    int l;
    cin >> p >> l;
    if(p.size() >= l){
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
    return 0;
}