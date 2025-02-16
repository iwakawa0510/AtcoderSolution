#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Vector {
    int x, y;
    Vector(int x=0, int y=0):x(x),y(y) {}
    Vector operator-(const Vector& v) const {
        return Vector(x-v.x, y-v.y);
    }
    int dot(const Vector& v) const {
        return x*v.x + y*v.y;
    }
    };

    int main() {
    Vector a, b, c;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    bool ok = false;
    for (int i = 0; i < 3; i++) {
        if ((b-a).dot(c-a) == 0) ok = true;
        swap(a,b); swap(b,c);
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
    }