#include<iostream>
using namespace std;
char s;
int l[30];
int main(){
	while(cin >> s)l[s-'a']++;
	for(int i= 1;i <= 100;i++){
		int ls=0;
		for(int j = 0;j < 26;j++)
            ls += l[j] == i;
		    if(ls != 0 && ls != 2){
			cout<< "No";
			return 0;
		    }
    }
    cout << "Yes" << endl;
    return 0;
}