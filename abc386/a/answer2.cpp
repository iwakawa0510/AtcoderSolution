#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    unordered_map<int, int> count;
    count[A]++;
    count[B]++;
    count[C]++;
    count[D]++;

    bool three_of_a_kind = false;
    bool pair = false;

    for (const auto& kv : count) {
        if (kv.second == 3) {
            three_of_a_kind = true;
        } else if (kv.second == 2) {
            pair = true;
        }
    }

    if (three_of_a_kind && pair) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}