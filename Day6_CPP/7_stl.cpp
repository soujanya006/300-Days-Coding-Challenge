#include <iostream>

#include <vector>

int main() {
    // Create a vector containing integers
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Print the size of the vector
    std::cout << "The size of the vector is: " << myVector.size() << std::endl;

    // Add an element to the vector
    myVector.push_back(6);

    // Print the size of the vector after adding an element
    std::cout << "The size of the vector after adding an element is: " << myVector.size() << std::endl;

    return 0;
}
