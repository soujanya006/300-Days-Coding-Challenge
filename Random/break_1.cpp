#include<iostream>
using namespace std;

int main(){

    char ch='1' ;
    //int num =1;

    cout<<endl;

    switch (ch)
    {
        case 1: {

            cout<<"first"<<endl;
        
        }
        break;
        case '1': {

            cout<<"second"<<endl;
        
        }
        break;    
    
        default:
            cout<<"deafault"<<endl;
        break;
    }




}