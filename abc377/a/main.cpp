#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    string str;
    cin >> str;
    if(str.find("A") != string::npos && str.find("B") != string::npos && str.find("C") != string::npos){
      cout << "Yes" << endl;   
    }else{
      cout << "No" << endl;
    }


    return 0;
}