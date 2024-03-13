#include<iostream>
#include <climits>
using namespace std;

int getMin(int arr[],int size){

    int MIN=INT_MAX;
    for (int i=0;i<size;i++){

        if(arr[i]<MIN){
            MIN=arr[i];
        }
    }
    return MIN;
}

int getMax(int arr[],int size){

    int MAX=INT_MIN;
    for (int i=0;i<size;i++){

        if(arr[i]>MAX){
            MAX=arr[i];
        }
    }
    return MAX;
}
int main() {

    int arr[100]={};
    cout<<"start..............";

    int size;
    cin>>size;

    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"end.........."<<endl;


    cout<<(getMax(arr,size))<<endl;
    cout<<(getMin(arr,size));
    
    return 0;
}