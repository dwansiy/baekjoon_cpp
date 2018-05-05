//
// Created by xema0 on 2018-04-11.
//
#include <iostream>

using namespace std;

namespace q2751 {

    //todo
    //void merge(int array[], const int size) {
    //
    //}

    //void merge_sort(int array[], const int size) {
    //    if (left < right) {
    //        int mid = (left + right) / 2;
    //        merge_sort(array, 0, mid, size);
    //        merge_sort(array, mid + 1, right, size);
    //        merge(array, mid, left, right, size);
    //    }
    //}

    int main() {
        int tc;
        cin >> tc;
        int array[tc];

        for (int i = 0; i < tc; i++) {
            cin >> array[i];
        }

        //q2751::merge_sort(array, tc);
        for (int i : array) {
            cout << i << endl;
        }

        return 0;
    }
}