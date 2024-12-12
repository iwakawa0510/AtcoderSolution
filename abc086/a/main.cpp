#include <iostream>
using namespace std;

int main(){ 
    int a,b;
    cin >> a >> b;
    int n =a*b;
    if(n % 2 == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    }
    return 0;
}