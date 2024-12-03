#include <iostream>
#include <string>
using namespace std;

int main(){
    string cards;
    int m;
    int h;
    while(true){
    cin >> cards;
    if(cards[0] == '-')break;
    cin >> m; 

    string temp;
    for(int i = 0; i < m;i++){
        cin >> h;
        temp = cards.substr(0,h);
        cards + temp;

    }cout << cards << endl;
  

    }
    return 0;
}