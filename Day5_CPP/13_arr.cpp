#include<iostream>
using namespace std;

/// @brief swap alternate elements in an array:


const int size1 = 6;
const int size2 = 7;
int arr1[size1] = {1,2,3,4,5,6};
int arr2[size2] = {1,2,3,4,5,6,7};

void print_Array(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void swap_Alternate(int arr[] , int size){
    for (int i  = 0; i < size; i+=2){
        if(i+1 < size ){
            swap(arr[i], arr[i +1]);
        }

    }
}

int main(){

    print_Array(arr1, size1);
    print_Array(arr2, size2);
    swap_Alternate(arr1, size1);
    print_Array(arr1, size1);
    swap_Alternate(arr2, size2);
    print_Array(arr2, size2);

    return 0; 
}