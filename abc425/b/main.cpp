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
    vector<int> a(n+1);
    vector<int> p(1,0);
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++){
        if(1 <= a[i]){
            p.push_back(i);
        }else{
            for(int j = 1;j <= n;j++){
            if(i == j){
                continue;
            }
            p.push_back(j);
            a[j] = -1;
            }
        }
    }
    if(p.size() == n){
            cout << "Yes" << endl;
            for(int j = 1;j <= n;j++){
                cout << p[j] << " ";
            }
        return 0;
    }
    cout << "No" << endl;
    for(int i = 1;i <= n;i++){
                cout << p[i] << " ";
            }
    return 0;
}