//
// Created by xema0 on 2018-05-01.
//
#include <iostream>

using namespace std;

namespace q2581 {
    int main() {
        int M, N;
        cin >> M >> N;

        long long sum = 0;
        int min = 0;

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
                sum += k;
                if (min == 0) min = k;
            }
        }


        if (sum == 0) {
            cout << -1 << endl;
        } else {
            cout << sum << endl;
            cout << min << endl;
        }
        return 0;
    }

}
//5736396
