#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int> x;
  for(int i=0;i<s.size();i++){
    if(s[i]=='|'){x.push_back(i);}
  }
  for(int i=1;i<x.size();i++){
    if(i>1){cout << " ";}
    cout << x[i]-x[i-1]-1;
  }cout << "\n";
  return 0;
}
