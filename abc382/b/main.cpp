#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    int n,d;
    string str;
    cin >> n >> d >> str;
    
    for(int i = 0;i < d;i++){
        for(int j = n;j <= 0;j--){
           if(str[j] == '@'){
            str[j] = '.';
           }
        }
    }
    cout << str << endl;
    return 0;
}