#include <iostream>
using namespace std;

void printName( string name){
    for ( int i = 0 ; i < 5; i ++){
        cout << name << endl;
    }
}

int main(){

    printName( "Soujanya:");
    cout << endl;
    printName( "Sanna:");
    cout << endl;
    printName( "hello:");
    return 0;
}