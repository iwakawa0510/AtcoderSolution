#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    string T ={};
    string S;
    cin >> S;
    string a = "dream";
    string b = "dreamer";
    string c = "erase";
    string d = "eraser";

    //文字列Sに文字列abcdが含まれるかを確認して含まれない場合は"No"を返す,
    if(S.rfind(a) || S.rfind(b) || S.rfind(c) || S.rfind(d)){
        while(true){
        if(T == S)break;//
        }
        cout << "Yes" << endl;
        return 0;

    }else{
        cout << "No" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;   
}