#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int x;
    cin >> x;
    int sum = 0;
    for(int i = 1;i <= 9;i++){
        for(int j = 1;j <= 9;j++){
        if((i * j) == x){
        }else {sum += (i * j);
        }
      } 
    }
    cout << sum << endl; 
    return 0;
}