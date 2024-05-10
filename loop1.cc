#include <iostream>

int main() {
    int64_t len = 0.50*1e10;
    int64_t *arr = new int64_t[len];
    for (int64_t i = 0; i < len; i++) {
        arr[i] = i;
    }

    for (int64_t i = 0; i < len; i++) {
        int64_t v1 = arr[i] + 1;
        int64_t v2 = v1 * 4;
        int64_t v3 = v2 / 2;
    }

    delete[] arr;
}

