#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a == b && b == c){
    cout << "Yes" << endl;
    return 0;
    }else if((a + b) == c){
    cout << "Yes" << endl;
    return 0;        
    }else if((a + c) == b){
    cout << "Yes" << endl;
    return 0;
    }else if((b + c) == a){
    cout << "Yes" << endl;
    return 0;
    }
    cout << "No" << endl;
    return 0;
}