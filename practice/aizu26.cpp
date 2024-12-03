#include <iostream>
using namespace std;
int n,x = 0;
 
int main(){
        //入力,
        while (true){
         cin >> n >> x;
        if(n == 0 and x == 0){
           break;
        }
        //全探索,
        int count = 0;
        for(int i = 1;i <= n-2;i++){
           for(int j = i + 1;j <= n-1;j++){
               for(int k = j + 1;k <= n;k++){ 
                   if(i + j + k == x){count++;
                   }
 
                }  

            }
        }
        //出力
        cout << count << endl;
        }
        
return 0;
}