#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long A[100];
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    for(int i = 0;i < n-2;i++){
        if(A[i] * A[i+2] != A[i+1] * A[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}