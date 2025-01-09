#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> mem(10,0);
  while(n>0){
    mem[n%10]++;
    n/=10;
  }
  if(mem[1]==1 && mem[2]==2 && mem[3]==3){
    cout << "Yes\n";
  }
  else{
    cout << "No\n";
  }
  return 0;
}