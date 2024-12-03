#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int input[n];
    for (int i = 0;i <= n ;i++){
         cin >> input[i];
         }
         
         for (int i = n - 1; i >= 0; i--){
            if (i != n - 1){
            cout << " "; 
            }
            cout << input[i];
         }
    cout << endl;
}