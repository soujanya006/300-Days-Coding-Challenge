#include <iostream>
using namespace std;

void displayMessage() {
    cout << "Hello from a void function!" << endl;
}

int main() {
    displayMessage(); // Call the void function
    return 0;
}

//Using a void function: A void function doesn't return 
//any value. It's used when you want to perform an 
//action but don't need to return anything.
