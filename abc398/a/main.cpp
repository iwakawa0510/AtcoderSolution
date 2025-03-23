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
    
    
    if(n%2 == 0){
        for(int i = 0;i < n/2-1;i++){
            cout << '-';
        }
        for(int i = 0;i < 2;i++){
            cout << '=';
        }
        for(int i = 0;i < n/2-1;i++){
            cout << '-';
        }
    }else{
        for(int i = 0;i < n/2;i++){
            cout << '-';
        }
        cout << '=';
        for(int i = 0;i < n/2;i++){
            cout << '-';    
    }
    }    
    return 0;
}