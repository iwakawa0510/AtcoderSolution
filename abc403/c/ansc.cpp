#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<set<int>> user(n + 1);
    vector<bool> all(n + 1, false);

    for (int i = 0; i < q; i++) {
        int type, x, y;
        cin >> type >> x;
        if (type == 1) {
            cin >> y;
            user[x].insert(y);
        } else if (type == 2) {
            all[x] = true;
        } else if (type == 3) {
            cin >> y;
            if (all[x] || user[x].count(y)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}
