#include<iostream>
using namespace std;

float poww(float a, int b){
    int result=1.0;
    int i=1;

    while(i<=b){
        result=result*a;

        i=i+1;
    }
    return result;
}

int main(){


    float number;
    int power_of_num;

    cout<<"enter the number "<<endl;
    cin>>number;


    cout<<"enter the power you want to compute "<<endl;
    cin>>power_of_num;

    float r = poww(number,power_of_num);
    cout<<r;


}