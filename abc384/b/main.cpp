#include <iostream>
using namespace std;

int main(){ 
    int N,R;
    cin >> N >> R;
    int D[N];
    int A[N];
    for(int i = 0;i < N;i++){
        cin >> D[i] >> A[i];
    }

    const int Div1_min = 1600;
    const int Div1_max = 2799;
    const int Div2_min = 1200;
    const int Div2_max = 2399;

    int T = R;
    for(int i = 0;i < N;i++){
        if(D[i] == 1){
            if(T >= Div1_min && T <= Div1_max){
                T += A[i];
            }
        }else if(D[i] ==2){
            if(T >= Div2_min && T <= Div2_max){
                T += A[i];
            }

        }
    }
    cout << T << endl;
    return 0;
}