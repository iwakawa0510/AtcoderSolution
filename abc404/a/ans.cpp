#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  for(char c='a';c<='z';c++){
    bool ok=true;
    for(int i=0;i<s.size();i++){
      if(s[i]==c){ok=false;}
    }
    if(ok){
      cout << c << "\n";
      return 0;
    }
  }
  return 0;
}


