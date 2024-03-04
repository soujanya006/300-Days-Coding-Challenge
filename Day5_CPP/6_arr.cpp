#include<iostream>
using namespace std;


/// @brief reverse a given array

const int size = 5;
int arr [size] ={1,2,3,4,5};

void reverse(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while (left <= right){
        swap(arr[left], arr[right]);
        left++ ;
        right-- ;
    }
    for(int i = 0 ; i < size; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    reverse(arr,size);
    return 0;
}