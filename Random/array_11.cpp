#include <iostream>

int main() {
    const int arraySize = 10; // You can change the size of the array as needed
    int myArray[arraySize];

    // Initialize all elements of the array
    for (int i = 0; i < arraySize; i++) {
        std:: cin>>myArray[i];
    }

    // Optionally, print the elements to check if they are initialized correctly
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Element at index " << i << " is " << myArray[i] << std::endl;
    }

    return 0;
}
