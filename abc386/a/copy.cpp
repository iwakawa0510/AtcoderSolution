#include <iostream>
#include <set>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    set<int> s({a,b,c,d});
    cout << (s.size() == 2 ? "Yes":"No");

    return 0;
}