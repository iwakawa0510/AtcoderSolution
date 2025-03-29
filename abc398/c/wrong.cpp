#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>//pair用,
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    
    pair<int,int> a(n);
    
    for(int i = 0;i < n;i++){
        cin >> a.at(i).first;
        a.at(i).second = i + 1;
    }
    sort(a.rbegin(),a.rend());
    
    for(int i = 0;i < n-1;i++){
        if(a.at(i).first != a.at(i+1).first){
        }
    }
    return 0;
}