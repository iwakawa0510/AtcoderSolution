#include <iostream>
using namespace std;

int main(){
    int i=1; //通し番号,
    
    while(true){
    int x;
    cin >>x;
    cout<<"Case"<<" "<< i << ":"<<" "<<x<<endl;
    if ( x == 0 ) break;
    i++;
    }

    return 0; 
}