#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() { 
    int n;
    cin >> n;

    map<string, int> cnt;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cnt[s]++;
    }

    string ans;
    int mx = 0;
    for (auto x : cnt) {
        if (x.second > mx) {
            mx = x.second;
            ans = x.first;
        }
    }

    cout << ans << endl;
    return 0;
}
