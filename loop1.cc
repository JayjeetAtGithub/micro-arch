#include <iostream>

int main() {
    int *arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    // read every element in the array
    for (int i = 0; i < 10; i++) {
        int v = arr[i] + 1;
        std::cout << v << std::endl;
    }
}

