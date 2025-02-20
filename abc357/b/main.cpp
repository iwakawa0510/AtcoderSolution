#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    string str;
    cin >> str;
    int cnt_u = 0;
    int cnt_l = 0;
    for(int i = 0;i < str.size();i++){
        if(str[i] < 'a'){
            cnt_u++;
        }else{
            cnt_l++;
        }
    }
    
    if(cnt_u > cnt_l){
        for(char& c : str){
            if(c >= 'a')c += ('a' - 'A');
        }
    }else{
        for(char& c : str){
            if(c > 'A')c -= ('a' - 'A');        
        }
    }
    cout << str << endl;
    return 0;
}