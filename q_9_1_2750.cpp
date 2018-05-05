#include <iostream>

using namespace std;

namespace q2750 {
//유클리드 호제법
    int gcd(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    int lcm(int a, int b) {
        return a * b / gcd(a, b);
    }

    int calculate(int m, int n, int x, int y) {
        /*
        (n * p + x, m * q + y) 꼴로 나타낸다.
         */

        int max = lcm(m, n);
        int p = 0, q = 0;
        for (int i = 0; i < max; i++) {
            int left = m * p + x;
            int right = n * q + y;
            if (left == right) return left;
            else if (left < right) p++;
            else q++;

            if (left > max || right > max) break;
        }
        return -1;

    }

    int main() {
        int T, M, N, x, y;
        cin >> T;

        for (int i = 0; i < T; i++) {
            cin >> M >> N >> x >> y;
            cout << calculate(M, N, x, y) << endl;
        }

        return 0;
    }
}