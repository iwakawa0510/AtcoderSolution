#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    vector<int> L,R;

	int l,r;
	while (cin >> l){
		L.push_back(l); 
	}
	while (cin >> r){
		R.push_back(r); 
	}
    cout << R[2] << endl;
    return 0;

    int cnt = 0;

    if(L.size() == R.size()){        
         for(int i = 0;i < L.size();i++){
            if(L[i] <= L[i+1]){
            break;
            }
          
        }cnt++;
        cout << cnt << endl;
    }

    return 0;
}