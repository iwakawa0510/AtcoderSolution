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
        for(int j = n-1;j >= 0;j--){
           if(str[j] == '@'){
            str[j] = '.';
            break;
           }
        }
    }
    cout << str << endl;
    return 0;
}