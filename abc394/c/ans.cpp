#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	for(int i = n - 2;i >= 0;i--){
		if((s[i] == 'W')&&(s[i+1] == 'A')){
			s[i] = 'A';
			s[i+1] = 'C';
		}
	}
	cout<< s <<endl;
	return 0;
}