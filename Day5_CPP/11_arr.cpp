#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}