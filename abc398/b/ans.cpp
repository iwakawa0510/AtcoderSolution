#include<bits/stdc++.h>

using namespace std;

bool isFull(vector<int> &b){
  sort(b.begin(),b.end());
  if(b[0]==b[1] && b[1]==b[2] && b[2]!=b[3] && b[3]==b[4]){return true;}
  if(b[0]==b[1] && b[1]!=b[2] && b[2]==b[3] && b[3]==b[4]){return true;}
  return false;
}

int main(){
  vector<int> a(7);
  for(auto &nx : a){cin >> nx;}
  for(int i=0;i<(1<<7);i++){
    vector<int> b;
    for(int j=0;j<7;j++){
      if(i&(1<<j)){b.push_back(a[j]);}
    }
    if(b.size()==5){
      sort(b.begin(),b.end());
      if(isFull(b)){
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
  return 0;
}
