#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

double dist(double sx, double sy, double tx, double ty) {
  double dx = tx-sx, dy = ty-sy;
  return sqrt(dx*dx + dy*dy);
}

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i,n) cin >> x[i] >> y[i];

  int nx = 0, ny = 0;
  double ans = 0;
  rep(i,n) {
    ans += dist(nx,ny,x[i],y[i]);
    nx = x[i]; ny = y[i];
  }
  ans += dist(nx,ny,0,0);

  printf("%.10f\n", ans);
  return 0;
}