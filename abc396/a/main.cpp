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
    int a[110];
    for(int  i = 1;i <= n;i++){
        cin >> a[i];
    }
    int m = n-2;
    for(int i = 1;i <= m;i++){
        if(a[i] == a[i+1]){
            if(a[i+1] == a[i+2]){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}