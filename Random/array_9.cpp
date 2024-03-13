#include<iostream>
using namespace std;

void PrintingArray(int arr[], int size){
    for (int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SwapAlternate(int arr[],int size){
    for (int i =0;i<size;i+=2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main (){
    int size;
    int arr[100]={};

    cout<<"How many elements you want to enter? :"<<endl;

    cin>>size;

    cout<<"enter the elements of array :"<<endl;

    cout<<"............................"<<endl;
    // array input
    for (int i=0;i<size;i++){

        cin>>arr[i];
    }
    cout<<endl;
    cout<<"the elements are "<<endl;

    // array print function 
    PrintingArray(arr,size);

    cout<<"now swapping alternate elements :"<<endl;

    //swapping function
    SwapAlternate(arr, size);

    // array print function 
    PrintingArray(arr,size);

    return 0;

}