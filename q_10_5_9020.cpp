//
// Created by xema0 on 2018-05-01.
//
#include <iostream>

using namespace std;

namespace q9020 {
    int main() {
        int tc;
        cin >> tc;
        for (int i = 0; i < tc; ++i) {
            int num;
            cin >> num;

            bool prime[num + 1];
            for (int j = 0; j < num + 1; ++j) {
                prime[j] = true;
            }
            prime[0] = false;
            prime[1] = false;
            for (int k = 2; k * k <= num; ++k) {
                if (prime[k])
                    for (int j = k * k; j <= num; j += k)
                        prime[j] = false;
            }

            int div = num / 2;
            for (int l = div; l >= 2; --l) {
                if (prime[l] && prime[num - l]) {
                    cout << l;
                    cout << " ";
                    cout << num - l;
                    cout << "\n";
                    break;
                }
            }

        }
        return 0;
    }
}
