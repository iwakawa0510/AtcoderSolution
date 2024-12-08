#include <iostream>
#include <array>
using namespace std;

class Dice{

private : 
         surface[6];
         index[6];

public :
    //コンストラクタ,
    Dice(int input_surface[]){
         for(int i = 0;i < 6;i++){
            surface[i] = input_surface[i];
            index[i] = i;
         }
    }

}