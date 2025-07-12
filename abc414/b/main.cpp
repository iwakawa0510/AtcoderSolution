#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

int main(){ 
    int n;
    string s;
    cin >> n;

    ll sum = 0;
    for(int i = 0;i < n;i++){
        ll l;
        char c;
        cin >> c >> l;
        sum += l;
        if(100 < sum){
            cout << "Too Long" << endl;
            return 0;
        }
        for(int j = 0;j < l;j++){
            s.push_back(c);
        }
    }
    cout << s << endl;
    return 0;
}