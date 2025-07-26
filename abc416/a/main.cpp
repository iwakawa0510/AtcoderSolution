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
    int n,l,r;
    string s;
    cin >> n >> l >> r;
    cin >> s;
    l--;
    r--;
    for(int i = l;i <= r;i++){
        if(!(s[i] =='o')){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}