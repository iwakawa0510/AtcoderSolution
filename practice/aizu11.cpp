#include <iostream>
using namespace std;

int main(){
  while(true){
  int x, y;
  cin >> x >> y;
  if ( x == 0 and y == 0 ) break;

  if ( x < y ){
    cout << x <<" "<< y << endl;
  }
   else{
    cout << y <<" "<< x << endl;
  }

}
  return 0;
}