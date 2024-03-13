#include<iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number < 2)
        return false;
    
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0)
            return false;
    }
    
    return true;
}


void TwinPrime(int a, int b){

    for (int i=a; i<=b-2;i++){

        if(isPrime(i) && isPrime(i+2)){

            cout<<"twin primes sets "<<i<<" "<<i+2<<endl;
        }
        
    }
}



int main(){
    int start;
    int end;

    cout<<"enter the starting range "<<endl;
    cin>>start;
    cout<<"enter the end range "<<endl;
    cin>>end;

    TwinPrime(start,end);

}