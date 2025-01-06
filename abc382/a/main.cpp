#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    int N;
    int D;
    cin >> N >> D;

    string str(N, ' ');
    for(int i = 0;i < N;i++){
        cin >> str[i];
    }
     int cnt1 = 0;
    for(int i = 0;i < N;i++){
         if(str.at(i) == '@')cnt1++;

    }
    cout << ((N-cnt1) + D) << endl;
    return 0;
}
