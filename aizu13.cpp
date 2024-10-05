#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int d,r;
    d = a/b;
    r = a%b;
    double f;
    f = 1.0*a/b;
    cout << fixed << setprecision(8);
    cout << d << " " << r << " " << f << endl;

return 0;
}