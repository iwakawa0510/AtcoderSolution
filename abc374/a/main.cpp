#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

 int main(){ 
    string S;
    cin >> S;
   
    if(S.substr(S.size()-3) == "san"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}