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
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        int b;
        cin >> b;
        if(a.size() <= 0){
            return 0;
        }
        for(int j = 0;j < n;j++){
            if(a.size() <= j){
                break;
            }
            if(a[j] == b){
                a.erase(a.begin()+j);
                break;
            }
        }
    }
    int l = a.size();
    if(l <= 0){
        return 0;
    }
    for(int i = 0;i < l;i++){
            cout << a[i] <<" ";        
    }
    return 0;
}