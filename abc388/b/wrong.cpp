#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int N,D;
    cin >> N >> D;
    int T[110] = {0};
    int L[110] = {0};
    for(int i = 1;i <= N;i++){
        cin >> T[i] >> L[i];
    }
    vector<int> mem = {0};
    for(int i = 1;i <= N;i++){
        if(int k = 1;k <= D){    
        int temp = (L[i] + k);
        mem[i] = (T[i] * temp);
        k++;
        }
    }

    sort(mem.begin(),mem.end(),greater<int>());
    for(int i = 0;i < D;i++){
        cout << mem[i+1] << endl;
    }
    return 0;
}