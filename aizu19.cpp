#include <iostream>
using namespace std;

int main() {
    int H,W;
     while(true){
     cin >> H >>W;
     if(H == 0 or W ==0)break;
     for (int i=0; i < H;i++){
        
       
        
        for (int j = 0; j < W; j++) {
            if(j%2 == 0 and i%2 == 0 || j%2 == 1 and i%2 == 1)
              cout << "#";
              else{
              cout << ".";
              }
        }
    cout << endl;
     }
    cout << endl;

    } 


return 0;
} 