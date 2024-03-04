#include<iostream>
using namespace std;

const int value = 4; // Global constant

int main() {
    cout << "The value is: " << endl;

    int value = -5; // Local variable, shadows the global 'value'
    if (value > 0) {
        cout << "Positive number" << endl;
    } else if (value < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "It's zero" << endl;
    }
    return 0;
}
