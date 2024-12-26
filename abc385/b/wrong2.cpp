#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){ 
    int H,W,x,y;
    //入力,
    cin >> H >> W >> x >> y;
    char S[H][W] = {};
    string T;
    for(int i = 0;i < H;i++){
        for(int j = 0;j < W;j++){
         cin >> S[i][j];
        }
    }
    cin >> T;
    int count = 0;

    int T_length = T.length();

    for(int i = 0;i < T_length;i++){

        if(T[i] == !'#'){
        if(T[i] == 'U' && S[x - 1][y]){
            if(S[x - 1][y] == '@'){
                count++;
                S[x - 1][y] = '.';
                }
            x--;
        }else if(T[i] == 'D' && S[x + 1][y]){
            if(S[x - 1][y] == '@'){
                count++;
                S[x - 1][y] = '.';
                }            
            x++;
        }else if(T[i] == 'U' && S[x][y - 1]){
            if(S[x - 1][y] == '@'){
                count++;
                S[x - 1][y] = '.';
            }
            y--;
        }else if(T[i] == 'D' && S[x][y + 1]){
            if(S[x - 1][y] == '@'){
                count++;
                S[x - 1][y] = '.';
            }
            y++;
        }
    }
    }
    cout << x <<" "<< y << " " << count << endl;
    return 0;
}