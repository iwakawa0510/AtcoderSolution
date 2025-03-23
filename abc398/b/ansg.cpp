#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a(7);
    for (int i = 0; i < 7; ++i) {
        cin >> a[i];
    }

    bool judge = false;
    for (int i = 0; i < 7; ++i) {
        int x = a[i];
        int xc = 0;
        vector<int> b = a; // コピーを作成
        
        for(int j = b.size() - 1; j >= 0; j--){
            if(x == b[j]){
                b.erase(b.begin()+j);
                xc++;
            }
        }

        if (xc >= 3) {
            for (int y : b) {
                if (x != y) {
                    int yc = 0;
                    vector<int> t = b;
                    for(int j = t.size() - 1; j >= 0; j--){
                        if(y == t[j]){
                            t.erase(t.begin()+j);
                            yc++;
                        }
                    }
                    if (yc >= 2) {
                        judge = true;
                        break;
                    }
                }
            }
        }
        if(judge) break;
    }

    if (judge) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}