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
    int h = (s.size()/2);
    s.erase(h,1);
    cout << s << endl;
    return 0;
}