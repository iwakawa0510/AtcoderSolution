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
    string s;
    cin >> s;

    int ans = 0;
    char target = 'i';

    for(char c:s){
        if(c != target)ans++;
        target = c^'o'^'i';
    }
    if(s.back() == 'i')ans++;
    cout << ans << endl;
    return 0;
}