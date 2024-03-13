#include<iostream>
using namespace std;

void Swapalternate(int arr[], int size){

    for(int i=0;i<size;i++){
        if (i+1<size){
            swap(arr[i], arr[i+1]);
        }


    }


}

void printArray()

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    Swapalternate(arr,10);
    printArray(arr,10);

    cout<<endl;
}