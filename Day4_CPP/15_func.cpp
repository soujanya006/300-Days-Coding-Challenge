#include <iostream>
using namespace std;

// Function to demonstrate call by reference
void incrementByReference(int &num) {
    num = num + 1;
    cout << "Inside incrementByReference: " << num << endl;
}

int main() {
    int a = 5;
    incrementByReference(a);
    cout << "In main after incrementByReference: " << a << endl;
    return 0;
}
