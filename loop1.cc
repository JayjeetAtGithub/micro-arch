#include <iostream>

int main() {
    int64_t len = 1e10;
    int64_t *arr = new int64_t[len];
    for (int64_t i = 0; i < len; i++) {
        arr[i] = i;
    }

    // read every element in the array
    // for (int i = 0; i < 10; i++) {
    //     int v = arr[i] + 1;
    //     std::cout << v << std::endl;
    // }
}

