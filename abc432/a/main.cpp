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
    vector<int> abc;
    for(int i = 0;i < 3;i++){
        int t;
        cin >> t;
        abc.push_back(t);
    }
    sort(abc.rbegin(),abc.rend());

    for(int i = 0;i < 3;i++){
        cout << abc[i];
    }
    return 0;
}