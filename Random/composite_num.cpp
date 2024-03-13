#include<iostream>
#include <cmath>

using namespace std;

bool isComposite(int number) {
    if (number < 2)
        return false;
    
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0)
            return true;
    }
    
    return false;
}


void Range(int a, int b){

    for (int i=a; i<=b;i++){

        if(isComposite(i)){

            cout<<"composite number "<<i<<endl;
        }
        
    }
}



int main(){
    int start=4;
    int end;

   
    cout<<"enter the end range "<<endl;
    cin>>end;

    Range(start,end);

}