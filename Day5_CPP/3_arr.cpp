#include<iostream>
using namespace std;

// Assuming a fixed size for simplicity. Alternatively, you could dynamically allocate this or use std::vector.
const int SIZE = 6;
int arr[SIZE]; // Define the array globally or pass it to the functions

void input_Array(int num){
    cout << "Enter " << num << " numbers:" << endl;
    for(int i = 0; i < num; i++){
        cin >> arr[i]; // Store input in the array
    }
}

void out_array(int num){
    cout << "Array elements are:" << endl;
    for(int i = 0 ; i < num; i++){
        cout << arr[i] << endl; // Print each element of the array
    }
}


void out_array1(int num){
    cout << "Array doubled elements are:" << endl;
    for(int i = 0 ; i < num; i++){
        cout << 2 * arr[i] << endl; // Print each element of the array
    }
}

int main(){
    input_Array(SIZE);
    out_array(SIZE);
    out_array1(SIZE);
    return 0;
}
