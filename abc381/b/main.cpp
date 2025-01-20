#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int No(){
    cout << "No" << endl;
    exit(0);
}

int Yes(){
    cout << "Yes" << endl;
    exit(0);
}

int main(){ 
    string str;
    cin >> str;
    if(!(str.size()%2 == 0))No();

    for(int i = 0;i <= (str.size()/2);i++){
        if(str[i] == str[i+1] && !(str[i+1] == str[i+2])){
            Yes();
        }
    }
    return 0;
}