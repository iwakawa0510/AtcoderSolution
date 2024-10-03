#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>> a >> b >> c;
    int t1,t2,t3; //一時変数,
    if(a > b ){
    t1 = a;
     a = b;
     b = t1;
    }
    if(a > c){
    t2 = a;
     a = c;
     c = t2;
    }
    if(b > c){
    t3 = b;
     b = c;
     c = t3;   
    }
cout << a << " " << b << " " << c << endl;
return 0;
}