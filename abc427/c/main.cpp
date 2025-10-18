#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
using Graph = vector<vector<int>>;

bool dfs(const Graph &G, int v, int c, vector<int> &color) {
    color[v] = c;
    for (auto v2 : G[v]) {
        if (color[v2] == 0) {
            if (!dfs(G, v2, -c, color)) return false;
        } else if (color[v2] != -c) return false;
    }
    return true;
}

bool is_bipartite(const Graph &G) {
    int N = (int)G.size();
    vector<int> color(N, 0);
    for (int v = 0; v < N; ++v) {
        if (color[v] != 0) continue;
        if (!dfs(G, v, 1, color)) return false;
    }
    return true;
}


int main() {
    int N, M;
    int ans = 0;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; ++i) cin >> A[i], --A[i];
    for (int i = 0; i < M; ++i) cin >> B[i], --B[i];
    
    vector<vector<int>> G(N);
    for (int i = 0; i < M; ++i) {
        if(!is_bipartite(G)){
            ans++;
        }else{    
            continue;
        }
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }
    
    cout << ans << endl;
}