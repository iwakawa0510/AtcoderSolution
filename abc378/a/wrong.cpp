#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int A[4];
    for(int i =0;i < 4;i++){
        cin >> A[i];
    } 
    int mem [4] = {0};
    for(int i = 0;i < 4;i++){
       if(A[i] == 1)mem[0]++;
       if(A[i] == 2)mem[1]++;
       if(A[i] == 3)mem[2]++;
       if(A[i] == 4)mem[3]++;
    }

    for(int i = 0;i < 4;i++){
        if(mem[i] == 4){
            cout << '2' << endl;
            return 0; 
        }
        else if(mem[i] < 2){
            cout << '1' << endl;
            return 0;
        }
    }
    cout << '0' << endl;
    return 0;
}