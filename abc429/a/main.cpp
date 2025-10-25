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
    for(int i = 1;i <= n;i++){
        if(i <= m){
            cout << "OK" << endl;
        }else{
            cout << "Too Many Requests" << endl;
        }
    }
    return 0;
}