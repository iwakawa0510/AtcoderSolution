#include <iostream>
using namespace std;

int main() {
    char ch;
    int counter[26] = {0};

    while ( cin >> ch ){
    if ((ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z')) {
        // 大文字を小文字に変換
        if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');}
        int num = ch - 'a';
        counter[num]++;
        
      }
    }

    for( int i = 0;i <=('z'-'a');i++){
        char co = i + ('a') ;
        cout << co << " " << ":" << " " << counter[i] << endl;
    }
    
    return 0;
}
//出力部実験コード,
// int main() {
//     int i = 0;
//     char co = i + ('a') ;
//     cout << co << endl;
//     return 0;
// }