#include <iostream>
using namespace std;

int main(){
    int m,f;//中間、期末の点数,
    int r;//再試験の点数,
    char grade[6]{'A','B','C','D','E','F'};//成績,
    while(true){

        //入力,
        cin >> m >> f >> r;
        
        //終了条件,
        if(m < 0 and f < 0 and r < 0){
            break;
        }
        int total = m + f;
        //結果出力,
        if(m < 0 || f < 0){
           cout << grade[5] << endl;
        }
        else if(total >= 80){
           cout << grade[0] << endl;
        }
        else if(total >= 65 and total < 80){
           cout << grade[1] << endl;
        }  
        else if(total >= 50 and total < 65){
           cout << grade[2] << endl;
        } 
        else if(total >= 30 and total < 50 and r < 50){
           cout << grade[3] << endl;
        } 
        else if(total >= 30 and total < 50 and r >= 50){
           cout << grade[2] << endl;
        } 
        else if(total < 30){
           cout << grade[5] << endl;
        }
    }



    return 0;
}