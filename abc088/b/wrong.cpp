#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){ 
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0;i < N;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    int Alice = 0;
    int Bob = 0;
    for(int i = 0;i < N-1;i++){
        Alice += a[i];
        Bob += a[i+1];
    }
    
    cout << (Alice - Bob) << endl;
    return 0;
}