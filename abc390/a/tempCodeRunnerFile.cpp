#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    int A[5];
    int temp_A[5];
    for(int i = 0;i < 5;i++){
        cin >> A[i];
    }
    int cnt = 0;
    int ans_A[5] = {1,2,3,4,5};
    for(int i = 0;i < 5;i++){
        if(ans_A[i] == A[i])cnt++;
    }
    if(cnt >= 5){
        cout << "No" << endl;
        return 0;
    }
    int cnt2 = 0;
    for(int i = 0;i < 5;i++){
        for(int i = 0;i < 5;i++){
        temp_A[i] = A[i];
        }
        if(temp_A[i] == ans_A[i]){
            cnt2++;
        }else{
            swap(temp_A[i],temp_A[i+1]);
            if(temp_A[i] == ans_A[i]){
            cnt2++;
            }
        }
        if(cnt2 > 3){
            cout << "Yes" << endl;
            return 0;
            
        }        
    }
    cout << "No" << endl;

    return 0;
}