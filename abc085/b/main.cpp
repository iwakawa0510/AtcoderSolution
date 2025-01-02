#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){ 
    int N;
    cin >> N;
    vector <int> mochi(N);
    for(int i = 0;i < N;i++){
        cin >> mochi[i];
    }
    sort(mochi.begin(),mochi.end());
    
    int count = 0;
    for(int i = 0;i < N+1;i++){
        if(mochi[i] < mochi[i+1] ){
            count++;
        }
    }
    cout << (count + 1) << endl;

    return 0;
}