#include <iostream>
#include <chrono>
using namespace std;


int main() {
    auto start = std::chrono::high_resolution_clock::now();
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number & 1) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }

    
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "Execution time: " << duration << " microseconds" << std::endl;
    return 0;



}