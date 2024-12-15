#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a[5];
  for (int i=0; i<5; i++) cin >> a[i];
  
  vector<pair<int, string>> ans(31);
  for (int i=1; i<32; i++) for (int j=0; j<5; j++) if (i & 1<<j) {
    ans[i-1].first -= a[j];
    ans[i-1].second += (char)('A' + j);
  }
  sort(ans.begin(), ans.end());
  
  for (auto i : ans) cout << i.second << endl;
}