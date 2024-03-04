#include<iostream>
using namespace std;

#define value 3.14

int main() {
    // Check if 'value' is a whole number
    if (value == static_cast<int>(value)) {
        cout << "Integer number" << endl;
    } else {
        cout << "It's a decimal number" << endl;
    }
    return 0;
}
