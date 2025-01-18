#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    string str;
    cin >> str;
    while(str.find(".") != string::npos){
        str.erase(str.find("."),1);
    }
    cout << str << endl;
    return 0;
}