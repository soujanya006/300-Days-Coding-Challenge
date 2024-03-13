#include<iostream>
using namespace std;

bool SearchKey(int arr[], int size, int key){

    for (int i =0;i<size;i++){

        if (arr[i]==key){
            return 1;

        }
    }
    return 0;
}

int main(){

    int arr[100]={};
    int size,key ;
    cout<<"enter the size of array"<<endl;
    cin>>size;

    cout<<"enter the elements :"<<endl;

    for (int i =0;i<size;i++){

        cin>>arr[i];
    }

    cout<<"type the element you want to search "<<endl;

    cin>>key;

    SearchKey(arr,size,key);

    if (SearchKey){
        cout<<"found key"<<endl;
    }

    else {
        cout<<"not found";
    }

}