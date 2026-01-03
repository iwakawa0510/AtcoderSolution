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
    string n;
    cin >> n;
    int m = n.size();
    vector<int> ni;
    for(int i = 0;i < m;i++){
        ni.push_back(n[i]-'0');
    }

    int sum = 0;
    int min_sum = INT16_MAX;
    auto t = ni;
    while(true){
        for(int i = 0;i < t.size();i++){
            sum += (t[i]*2);
        }
        string ts = to_string(sum);
        for(int i = 0;i < ts.size();i++){
        t.push_back(ts[i]-'0');
        }
        if(sum == 0){
            cout << "Yes" << endl;
            return 0;
        }
        if(min_sum >= sum){
            min_sum = sum;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    return 0;
}