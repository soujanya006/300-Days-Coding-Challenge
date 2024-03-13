#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 to indicate that the key is not found
}

int main() {
    cout<<endl;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 5;
    int index = linearSearch(arr, size, key);

    if (index != -1) {
        cout << "Key found at index: " << index << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
