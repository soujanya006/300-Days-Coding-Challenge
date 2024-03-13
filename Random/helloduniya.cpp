#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    int prime_Count = 0; // Counter for the number of prime numbers

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end; i++) {
        bool isPrime = true;

        if (i <= 1)
            isPrime = false;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
            prime_Count++;
        }
    }

    cout << endl;
    cout << "Total prime numbers found: " << prime_Count << endl;

    return 0;
}
