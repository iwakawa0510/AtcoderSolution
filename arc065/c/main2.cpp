#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> divideWords = {"dream","dreamer","erase","eraser"};

int main(){ 
    string S;
    cin >> S;

    reverse(S.begin(),S.end());

    for(int i = 0;i < divideWords.size();i++){
        reverse(divideWords[i].begin(),divideWords[i].end());
    }

    bool can = true;    
    for(int i = 0;i < S.size();){
        bool can2 = false;
        for(int j = 0;j < divideWords.size();j++){
            string d = divideWords[j];
            if(S.substr(i,d.size()) == d){
                can2 = true;
                i += d.size();
                break;
            }
        }
        if(!can2){
            can = false;
            break;
        }
    }
     
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
      

    return 0;
}