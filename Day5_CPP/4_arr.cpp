#include<iostream>
using namespace std;

const int size = 6;
int arr[size] ={1,2,3,4,5,6};

bool linear_search(int size, int target, int arr[] ){
    for (int i = 0; i < size ; i++){
        if(arr[i] ==target){
            return true ;
        }
    }
    return false;
}

int main(){
    int target = 99;
    cout << linear_search(size, target, arr);

    return 0;
}