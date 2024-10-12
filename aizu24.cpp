#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int matrixA[n][m]{0};
    // 行列Aの入力,
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        cin >> matrixA[i][j];
        }
    }

    int matrixB[m]{0};
    // 行列Bの入力,
    for(int i = 0; i < m; i++){
        cin >> matrixB[i];
    }
    
    int matrixC[n]{0};
    //行列AとBの積算して行列Cを求め結果を出力する,
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
           matrixC[i] += matrixA[i][j]*matrixB[i];
           
        
        }  
    for (int i = 0; i < n; i++) {
        cout << matrixC[i] << endl;
    }    
    }
    return 0;
}
