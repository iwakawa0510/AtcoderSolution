#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;  // グラフのデータ構造

// 色
const int WHITE = 0;
const int BLACK = 1;

int main() {
    // 入力
    long long N, M;
    cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    long long num_ng_edges = 0;
    bool is_bipartite = true;  // 二部グラフかどうか
    vector<int> color(N, -1);  // 各頂点の色

    for (int s = 0; s < N; ++s) {
        if (color[s] != -1) continue;

        // 白色頂点、黒色頂点の個数
        long long white_num = 0, black_num = 0;

        // 頂点 s を始点とする BFS
        queue<int> que;
        que.push(s);
        color[s] = WHITE;  // 頂点 s を白色に塗る
        while (!que.empty()) {
            int v = que.front();
            que.pop();

            // 頂点の個数をカウント
            if (color[v] == WHITE) 
                ++white_num;
            else
                ++black_num;

            // 頂点 v の隣接頂点について
            for (auto v2 : G[v]) {
                if (color[v2] != -1) {
                    // すでに色が塗られているとき
                    if (color[v2] == color[v]) {
                        // 隣接頂点が同色はダメ
                        is_bipartite = false;
                    }
                } else {
                    // 新しい頂点を処理
                    color[v2] = 1 - color[v];
                    que.push(v2);
                }
            }
        }

        // ng 辺の本数
        num_ng_edges += white_num * (white_num - 1) / 2
                        + black_num * (black_num - 1) / 2;
    }

    // 答え
    if (is_bipartite)
        cout << N * (N - 1) / 2 - M - num_ng_edges << endl;
    else
        cout << 0 << endl;
}