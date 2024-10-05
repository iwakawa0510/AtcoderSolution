#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   const double PI = 3.141592653589;
   double r;
   cin >> r;
   double Area = (r*r)*PI;//円の面積,
   double Circle = 2*r*PI;//円の周囲長,
   
   cout << fixed << setprecision(8);
   cout << Area << " " << Circle << endl;
return 0;
}