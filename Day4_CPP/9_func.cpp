#include <iostream>
using namespace std;

void Print_Odd_Even(int num){
    if(num % 2 == 0){
        cout << "Even:" << endl;
    }
    else {
        cout << "Odd: "<< endl;

    }

}

int main(){
    Print_Odd_Even(0);
    return 0;
}