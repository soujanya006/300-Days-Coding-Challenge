#include <iostream>
#include <vector>
using namespace std;

void sortBinaryVector(vector<int>& vec) {
    // Count the number of 0s
    int countZeros = 0;
    for (int num : vec) {
        if (num == 0) {
            countZeros++;
        }
    }

    // Fill the vector with 0s up to countZeros, then fill the rest with 1s
    for (int i = 0; i < vec.size(); i++) {
        if (i < countZeros) {
            vec[i] = 0;
        } else {
            vec[i] = 1;
        }
    }
}

int main() {
    vector<int> vec = {0, 1, 1, 0, 1, 0, 1, 0, 0, 1};

    sortBinaryVector(vec);

    // Print the sorted vector
    cout << "Sorted vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
