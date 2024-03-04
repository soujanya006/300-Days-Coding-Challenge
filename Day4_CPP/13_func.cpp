#include <iostream>
using namespace std;

// Function to check if a number is even
bool isPrime(int number) {
    if (number <= 1) return false; // Handling numbers less than 2, which are not prime
    for(int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true; // Return true if no factors were found
}

int main() {
    cout << isPrime(6);

    return 0;
}