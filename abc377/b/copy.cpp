#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
using namespace std;
bool avoid_rook_attack(const array<array<bool,8>,8> board,int i,int j){
    for(int k = 0;k < 8;k++){
        if(board[i][k]){
            return false;
        }    
    }
    for(int k = 0;k < 8;k++){
        if(board[k][j]){
            return false;
        }    
    }
    return true;
}
int main(){
    array<array<bool,8>,8> board;
    for(int i = 0;i < 8;i++){
        for(int j = 0;j < 8;j++){
            char c;
            cin >> c;
            board[i][j] = c == '#';
        }
    }
    int ans = 0;

    for(int i = 0;i < 8;i++){
        for(int j = 0;j < 8;j++){
            if(avoid_rook_attack(board,i,j)){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}