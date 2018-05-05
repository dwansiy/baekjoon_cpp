//
// Created by xema0 on 2018-05-01.
//
#include <iostream>

using namespace std;

namespace q4948 {
    int main() {
        int n;
        do {
            cin >> n;
            if (n == 0)
                return 0;
            int n2 = n * 2;

            bool prime[n2 + 1];
            for (int l = 0; l < n2 + 1; ++l) {
                prime[l] = true;
            }
            prime[0] = false;
            prime[1] = false;
            for (int i = 2; i * i <= n2; ++i) {
                if (prime[i])
                    for (int j = i * i; j <= n2; j += i)
                        prime[j] = false;
            }

            int count = 0;
            for (int k = n + 1; k <= n2; ++k) {
                if (prime[k]) {
                    count++;
                }
            }
            cout << count;
            cout << "\n";

        } while (n != 0);

        return 0;
    }
}