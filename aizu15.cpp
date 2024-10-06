#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b;
    char e_op;//初等演算子,
    

    while (true){
     cin >> a >> e_op >> b;
     if( e_op == '?' ){
        break;
     }
     if( e_op == '+' ){
        cout << a + b <<endl;
     }
     if( e_op == '-' ){
        cout << a - b <<endl;

     }
     if( e_op == '*' ){
        cout << a * b <<endl;

     }
     if( e_op == '/' ){
        cout << a / b <<endl;

     }
    }
    

return 0;
}