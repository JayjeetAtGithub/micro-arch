#include <iostream>

int main() {
    int64_t len = 0.50*1e10;
    int64_t *arr = new int64_t[len];
    for (int64_t i = 0; i < len; i++) {
        arr[i] = i;
    }

    int64_t sum = 0;
    for (int64_t i = 0; i < len; i++) {
        sum += arr[i];
    }

    std::cout << "Sum: " << sum << std::endl;

    delete[] arr;
}

