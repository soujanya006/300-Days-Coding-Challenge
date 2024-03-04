#include <iostream>
#include <map>
using namespace std;

const int size = 7; // Assuming 7 is the correct size you want
int arr[size] = {1, 2, 3, 4, 5, 6, 6}; // Example array with a duplicate

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countOccurrences(int arr[], int size) {
    map<int, int> occurrenceMap; // Map to store element-occurrence pairs

    // Count occurrences of each element
    for (int i = 0; i < size; i++) {
        occurrenceMap[arr[i]]++;
    }

    // Print occurrences of each element
    for (auto &element : occurrenceMap) {
        cout << element.first << " occurs " << element.second << " times" << endl;
    }
}

int main() {
    cout << "Array: ";
    printArray(arr, size);
    cout << "Occurrences:" << endl;
    countOccurrences(arr, size);

    return 0;
}
