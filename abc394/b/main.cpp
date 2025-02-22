#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

bool compare(string & s1, string& s2) {return s1.size() < s2.size();}

int main(){ 
    int n;
    cin >> n;
    vector <string> S (n);
    
    for(int i = 0;i < n;i++){
        cin >> S[i];
    }
    sort(S.begin(),S.end(), compare);

    string ans;
    for(int i = 0;i < n;i++){
        ans += S.at(i);
    }
    cout << ans << endl;
    
    return 0;
}