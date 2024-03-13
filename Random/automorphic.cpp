#include <iostream>
using namespace std;

bool isAutomorphicNumber(int number) {
    int square = number * number;
    
    while (number > 0) {
        if (number % 10 != square % 10) {
            return false;
        }
        
        number /= 10;
        square /= 10;
    }
    
    return true;
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (isAutomorphicNumber(number)) {
        cout << number << " is an Automorphic number." << endl;
    } else {
        cout << number << " is not an Automorphic number." << endl;
    }

    return 0;
}
