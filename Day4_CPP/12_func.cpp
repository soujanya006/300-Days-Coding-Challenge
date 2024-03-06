#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int number) {
    if (number % 2 == 0) {
        return true; // The number is even
    } else {
        return false; // The number is odd
    }
}

int main() {
    int num = 4;
    if (isEven(num)) {
        cout << num << " is even.     " << endl;
    } else {
        cout << num << " is not even." << endl;
    }
    return 0;
}
