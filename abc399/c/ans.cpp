#include <iostream>
using namespace std;
#include "atcoder/dsu.hpp"
int main() {
  int N, M;
  cin >> N >> M;
  atcoder::dsu uf(N);
  int K = N;
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    if (!uf.same(u, v)) uf.merge(u, v), K--;
  }
  cout << M - (N - K) << "\n";
}