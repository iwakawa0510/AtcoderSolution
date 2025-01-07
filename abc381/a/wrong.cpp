#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string Yes_No(string s){
    if((int)(s.length()) % 2 = 1){
        return"Yes";    
    }else{
        return"No";
    }
}

int main(){ 
    int N;
    cin >> N;
    
    string str(N, ' ');

  for(int i = 0;i < N;i++){
     cin >> str[i];
     }
    
    cout << Yes_No(str) << endl;
    return 0;
}



