#include <iostream>
using namespace std;


int main(){
    char ch;                     // １つの文字を格納するchar型の変数

    while(true){
        if(!cin.get(ch)){break;
        }

        //a-Aの差を取ることで大文字小文字変換,
        if(ch >= 'A' and ch <= 'Z'){
            ch = ch + ('a'-'A');
            
        }
        else if(ch >= 'a' and ch <= 'z'){
            ch = ch - ('a'-'A');
            
        }
        cout << ch;
    }
    return 0;
}