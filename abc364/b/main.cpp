#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int h,w;
    cin >> h >> w;
    int si,sj;
    cin >> si >> sj;
    si--;
    sj--;
    vector<vector<char>> C (h,vector<char>(w));
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin >> C[i][j];
        }
    }
    string direction;
    cin >> direction;
    
    for(int i = 0;i < direction.size();i++){
        int ni = si;
        int nj = sj;

        if(direction[i] == 'L'){nj--;
        }else if(direction[i] == 'R'){nj++;                
        }else if(direction[i] == 'U'){ni--;         
        }else if(direction[i] == 'D'){ni++; 
        }
        
		if(0 <= ni && ni < h && 0 <= nj && nj < w && C[ni][nj] == '.'){
			si = ni;
            sj = nj;
		}        
    }
    cout << si + 1 << ' ' << sj + 1 << endl;
    return 0;
}