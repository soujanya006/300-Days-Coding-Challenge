#include <iostream>
using namespace std;

int Printmax(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        return num1;

    }
    else if(num2 > num1 && num2 > num3){
        return num2;
    }
    else {
        return num3;
    }
}

int main(){
    cout << Printmax(1,2,4);
    return 0;
}