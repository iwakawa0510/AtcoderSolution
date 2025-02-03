#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> taro(n+1);
  rep(i,m) {
    int a; char b;
    cin >> a >> b;
    if (b == 'M') {
      if (taro[a]) cout << "No" << endl;
      else {
        taro[a] = true;
        cout << "Yes" << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}