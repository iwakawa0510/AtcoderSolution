#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<int> x(n),y(n);   
    for(int i = 0;i < n;i++){
        cin >> x[i] >> y[i]; 
    }

    int index = -1;
    for(int i = 0;i < n;i++){
        int temp_max_dist = 0;
        for(int j = 0;j < n;j++){
            int dist = ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if(temp_max_dist < dist){
                temp_max_dist = dist;
                index = j;
            }
        }
        cout << index+1 << endl;       
    }
    return 0;
}