#include <iostream>
using namespace std;

int main(){
    int W,H; //長方形右上頂点の座標,
    int x,y; //円の中心座標,
    int r  ; //円の半径,
    cin>> W >> H >> x >> y >>r;
    if(x >= 0 and x+r <= W and y >=0 and y+r <= H ){
     cout<<"Yes"<< endl;
    }else {
     cout<<"No"<< endl;
    }
    return 0;

}