#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> deg(n);
  dsu uf(n);
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    deg[a]++;
    deg[b]++;
    uf.merge(a,b);
  }

  if (deg == vector<int>(n,2) && uf.size(0) == n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}