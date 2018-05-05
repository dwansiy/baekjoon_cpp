//
// Created by xema0 on 2018-05-01.
//
#include <iostream>
#include <stack>

using namespace std;

namespace q1260 {

    int main() {
        int N, M, V;
        cin >> N >> M >> V;
        int graph[N][N];

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                graph[i][j] = 0;
            }
        }

        for (int k = 0; k < M; ++k) {
            int v1, v2;
            cin >> v1 >> v2;
            graph[v1][v2] = 1;
            graph[v2][v1] = 1;
        }

        //방문여부
        bool visit[N];
        for (int m = 0; m < N; ++m) {
            visit[m] = false;
        }

        stack<int> st;
        st.push(V);
        visit[V] = true;

        while (!st.empty()) {
            //todo
        }

        return 0;
    }

}