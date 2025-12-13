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
    int n;
    string s;
    cin >> n >> s;
    int size_s = s.size();
    int diff = (n - size_s);
    for(int i = 0;i < diff;i++){
        cout << "o";
    }
    cout << s << endl;
    return 0;
}