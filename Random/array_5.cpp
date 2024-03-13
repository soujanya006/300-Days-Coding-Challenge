#include<iostream>
using namespace std;


void PrintArray(int arr[],int size){

    cout<<"printing the array :"<<endl;
    for (int i =0;i<size;i++){

        cout<<(arr[i])<<" "<<endl;
    }

}

int main(){

    int arr[10]={1,2,3,4,5,6,67,8,9,10};

    //PrintArray(arr,10);
    PrintArray(arr,20);

 



    return 0;
}