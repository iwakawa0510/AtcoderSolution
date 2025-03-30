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
    cin >> n;
    vector<int> p(n);
    for(int i = 0;i < n;i++){
        cin >> p[i];
    }

    for(int i = 0;i < n;i++){
        int r = 1;
        for(int j = 0;j < n;j++){
            if(p[j] > p[i])r++;
        }
        cout << r << '\n';
    }
    return 0;
}