#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,p;
    cin >> s >> p;
    string W_s = s + s;

    if(W_s.find(p) == string::npos) {
        cout << "No" << endl;        
    }else{
        cout << "Yes" << endl;
    }
    


    return 0;
}