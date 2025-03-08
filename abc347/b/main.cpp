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
    set<string> st;
    for(int i = 0;i <= s.size();i++){
        for(int j = 1;j + i <= s.size();j++){
            st.insert(s.substr(i,j));
        }
    }
    
    cout << st.size() << endl;
    return 0;
}