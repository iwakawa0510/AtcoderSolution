#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    string str;
    cin >> str;
    
    int mem[110];
    for(int i = 0;i < 110;i++){
        int hyph_cnt = 0;
        int val_cnt = 0;
     for(int j = 0;j < str.size();j++){
        if(str[j] == "-"){
            hyph_cnt++;
        }else if(str[j] == "|"){
            val_cnt++;
            if(val_cnt >= 2){
                mem[i] = hyph_cnt;
                continue;
             }
            }
        }
    }return 0;
}