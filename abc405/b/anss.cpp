#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  rep(num,n+1) {
    set<int> st(a.begin(), a.end());
    if (st.size() != m) {
      cout << num << endl;
      return 0;
    }
    a.pop_back();
  }
  return 0;
}