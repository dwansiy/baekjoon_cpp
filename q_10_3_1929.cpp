//
// Created by xema0 on 2018-05-01.
//
#include <iostream>

using namespace std;

namespace q1929 {
    int main() {
        int M, N;
        cin >> M >> N;

        bool prime[N + 1];
        for (int l = 0; l < N + 1; ++l) {
            prime[l] = true;
        }
        prime[0] = false;
        prime[1] = false;
        for (int i = 2; i * i <= N; ++i) {
            if (prime[i])
                for (int j = i * i; j <= N; j += i)
                    prime[j] = false;
        }

        for (int k = M; k <= N; ++k) {
            if (prime[k]) {
                cout << k;
                cout << '\n';
            }
        }

        return 0;
    }
}