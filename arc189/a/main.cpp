#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    //入力,
    int N;//マスの最大数,
    cin >> N;
    vector<int> vec(N);//マスi,
    for(int i = 1;i < N;i++){
        cin >> vec[i];
    }
     
    return 0;
}