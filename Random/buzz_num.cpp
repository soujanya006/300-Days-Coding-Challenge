#include<iostream>
using namespace std;

bool buzz(int a){

    if(a%7==0 && a%10==7){
        return true;
    }
    else{
        return false;
    }
}

int main(){

int num;
cout<<"enter the number "<<endl;
cin>>num;

int checker_buzz=buzz(num);

cout<<checker_buzz;

}