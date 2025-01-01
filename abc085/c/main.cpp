#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    //入力と定数,
    int N,Y;
    cin >> N >> Y;
    const int x_e = 10000;
    const int y_e = 5000;
    const int z_e = 1000;
    
    for(int x = 0;x <= N;x++){
        for(int y = 0;y <= N - x;y++){
          int z = N - x - y;
          if(Y == (x_e * x) + (y_e * y) + (z_e * z)){
             cout << x << " " << y << " "<< z << endl;
             return 0;         
        }
      }        
    }
    cout << "-1" << " " << "-1" << " "<< "-1" << endl;
    return 0;
}