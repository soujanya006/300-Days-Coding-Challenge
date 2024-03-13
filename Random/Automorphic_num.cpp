#include<iostream>
using namespace std;

bool Automorphic(int n){
    int square= n*n;
    while(n>0){
        if (n%10!=square%10){
            return 0;
        }
        n=n/10;
        square=square/10;
    }
    return 1;
}
int main(){

    int number;
    cin>>number;

    if(Automorphic(number)){

        cout<<endl;
        cout<<"Automorphic  number "<<endl;
    }
    else{
        cout<<endl;
        cout<<"Not Automorphic  number "<<endl;

    }
}
