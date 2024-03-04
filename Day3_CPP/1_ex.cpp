#include <iostream>
using namespace std;

int main() {
    int a = 12;  // In binary: 1100
    int b = 10;  // In binary: 1010

    // Perform bitwise XOR operation
    int result = a ^ b;  // In binary: 0110 which is 6 in decimal

    cout << "The result of " << a << " XOR " << b << " is " << result << endl;

    return 0;
}
