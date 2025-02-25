#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> a(n);
    int t = 0;
    for(int i = 0;i < n;i++){
        cin >> s[i] >> a[i];
        t += a[i];
    }
    sort(s.begin(),s.end(), [](const string& s1,const string& s2){
        return s1 < s2;
    });//実はラムダ式いらない,

    int winner = t % n;
    
    cout << s.at(winner) << endl;
    return 0;
}