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
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    for(int i = 0;i < a;i++){
        s.erase(s.begin());
    }
    for(int i = 0;i < b;i++){
        s.pop_back();
    }
    cout << s << endl;
    return 0;
}