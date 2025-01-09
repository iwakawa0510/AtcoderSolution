#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int N[6];
    for(int i = 0;i < 6;i++){
        cin >> N[i];
    }
    int cnt1 = 0;
    int cnt2 = 0; 
    int cnt3 = 0;
    for(int i = 0;i < 6;i++){
    if(N[i] == 1)cnt1++;
    if(N[i] == 2)cnt2++; 
    if(N[i] == 3)cnt3++;


    }
    if(cnt1 == 1 && cnt2 == 2 && cnt3 == 3){
         cout << "Yes" << endl;
         return 0;
     }else{
         cout << "No" << endl;
         return 0;
     }
    return 0;
}