#include<iostream>
using namespace std;

int main (){
int arr[100]={1,1,2,3,3,4,4,5,5,-9,2};
int ans1=0;

for (int i =0;i<11; i++){

    ans1=ans1^arr[i];

}
cout<<ans1;

}