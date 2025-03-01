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
    vector <int> a(n);
    for(auto& x : a)cin >> x;

    for(int i = 0;i < n;i++){
        for(int j = n;j > 0;j--){
            if(i != j && a[i] == a[j]){                
                cout << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}