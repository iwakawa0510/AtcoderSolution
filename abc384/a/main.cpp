#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){ 
    int N;
    string S;
    char c_1,c_2;
    cin >> N >> c_1 >> c_2 >> S;
    for(int i = 0;i < N;i++){
        if(!(S[i] == c_1)){
            S[i] = c_2;
        }
    }
    cout << S << endl;
    return 0;
}