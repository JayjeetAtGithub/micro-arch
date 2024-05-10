// #include <iostream>

// int64_t calc_sum(int64_t *arr, int64_t len) {
//     int64_t sum = 0;
//     for (int64_t i = 0; i < len; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int64_t len = 1e8;
//     int64_t *arr = new int64_t[len];
//     for (int64_t i = 0; i < len; i++) {
//         arr[i] = i;
//     }

//     for (int64_t i = 0; i < 4*1e2; i++) {
//         std::cout << i << ": ";
//         std::cout << calc_sum(arr, len) << std::endl;
//     }

//     delete[] arr;
// }

#include <iostream>

int main() {
    // Create two arrays of integers
    int array1[10000000];
    int array2[10000000];

    // Initialize the arrays
    for (int i = 0; i < 10000000; i++) {
        array1[i] = i;
        array2[i] = i * 2;
    }

    // Access the elements of the arrays in a loop
    for (int i = 0; i < 10000000; i++) {
        int value1 = array1[i];
        int value2 = array2[i];
    }

    return 0;
}
