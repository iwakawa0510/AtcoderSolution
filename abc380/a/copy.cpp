#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int mem[10] = {0};
    while(N > 0){
        mem[N%10]++;
        N/=10;
    }
    if(mem[1] == 1 && mem[2] == 2 && mem[3] ==3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}