#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    string S,T;
    cin >> S >> T;
    
    for(int w = 1;w < S.size();w++){
        for(int c = 0;c < w;c++){
            string now = "";
            for(int i = c;i < S.size();i += w){
                now += S[i];
            } 
            if(now == T){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}