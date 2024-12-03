#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a,b,C;
    cin >> a >> b >> C;

    const double PI = acos(-1);//円周率,

    double C_rad = C * PI/180;
    
    //面積Sを求める,
    double S = 0.5 * a * b * sin(C_rad);

    //周囲長Lを求める,
    double c = sqrt(a * a + b * b -2 * a * b * cos(C_rad));
    double L = a + b + c;
    
    //高さhを求める,
    double h = (2*S)/a;

    //出力,
    cout << fixed << setprecision(8);
    cout << S << endl;
    cout << L << endl;
    cout << h << endl;

return 0;
}