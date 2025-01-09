#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int N;
    cin >> N;
    int m = N;//Nの初期値を保存,
    
    int digit = 0;//桁数,

    while(N > 0){
        N/=10;        
        digit++;     
    }
    int mem[10] = {0};//要素の格納,
    int roop = digit;//ループ回数,
    for(int i = 0;i < roop;i++){
        mem[digit-1] = m%10;
        m/=10;
        digit--; 
    }
    int bca = (mem[1]*100) + (mem[2]*10) + (mem[0]*1);
    int cab = (mem[2]*100) + (mem[0]*10) + (mem[1]*1);

    cout << bca << " " << cab << endl;
   
    return 0;
}