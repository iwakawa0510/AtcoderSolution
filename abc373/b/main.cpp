#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    vector<int> x(n);
    for(int i = 0;i < n;i++){
        x[str.at(i) - 'A'] = i;
    }
    int ans = 0;
    for(int i = 0;i < (n-1);i++){
        ans += abs(x[i] - x[i+1]);
    }
    cout << ans << endl; 
    return 0;
}