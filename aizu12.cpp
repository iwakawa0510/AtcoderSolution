#include <iostream>
using namespace std;

int main(){
    int a,b,c;
        cin >> a >> b >> c;
        int count = 0; 
        for (int x = a; a <= b; x++) {
         if( c % x == 0 )count++;
        }
    cout << count << endl;
    return 0;

}