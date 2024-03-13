#include <iostream>
#include <chrono>

using namespace std;

int main(){

        auto start = std::chrono::high_resolution_clock::now();

    // Code or section to measure
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }



    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "Execution time: " << duration << " microseconds" << std::endl;

    return 0;
}

    