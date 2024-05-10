#include <iostream>

int main() {
    int64_t len = 0.75*1e10;
    int64_t *arr = new int64_t[len];
    for (int64_t i = 0; i < len; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < len; i++) {
        int v = arr[i] + 1;
        std::cout << v << std::endl;
    }

    delete[] arr;
}

