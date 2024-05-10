#include <iostream>

int64_t calc_sum(int64_t *arr, int64_t len) {
    int64_t sum = 0;
    for (int64_t i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int64_t len = 1e9;
    int64_t *arr = new int64_t[len];
    for (int64_t i = 0; i < len; i++) {
        arr[i] = i;
    }

    for (int64_t i = 0; i < 10e5; i++) {
        calc_sum(arr, len);
    }

    delete[] arr;
}

