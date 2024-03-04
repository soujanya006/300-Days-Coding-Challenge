#include <iostream>
using namespace std;


void printC(){
    cout << " hello from printC"<< endl;
    
}

void printB(){
    cout << " hello from printB"<< endl;
    printC();
}

void printA(){
    cout << " hello from printA"<< endl;
    printB();
}

int main(){
    cout<< " hello from main:" << endl;
    printA();
    return 0;
}