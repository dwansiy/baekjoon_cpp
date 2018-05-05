//
// Created by xema0 on 2018-05-01.
//
#include <iostream>

using namespace std;

namespace q1978 {
    bool isPrimeNumber(int num) {
        int count = 0;

        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }
        return count == 2;
    }
    int main() {
        int tc;
        cin >> tc;

        int count = 0;
        int tmp;

        for (int i = 0; i < tc; i++) {
            cin >> tmp;
            if (q1978::isPrimeNumber(tmp)) {
                count++;
            }
        }

        cout << count << endl;

        return 0;
    }
}