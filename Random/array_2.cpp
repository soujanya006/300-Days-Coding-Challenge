#include<iostream>
using namespace std;

bool search (int arr[],int size ,int key){
 
    for (int i=0; i<size;i++){

        if(arr[i]==key){
            return 1;

        }
    }
    return 0;
}

int main(){

    int arr[10]={1,3,4,5,6,7,8,9,12,32};

    cout<<" enter the element you want to search "<<endl;
    int key;
    cin>>key;
    
    bool found = search (arr,10,key);

    if (found==1){   //if (found) are same ??
        cout<<" key is present"<<endl;
        
    }
    else{
        cout<<"key is not present"<<endl;

    }

}