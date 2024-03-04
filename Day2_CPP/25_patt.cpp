#include <iostream>
using namespace std;

int main (){
    int row = 8; 
    for(int i = 0; i < row; i ++){
        // for space
        for(int j = 0; j < i ; j++){
            cout << " ";

        }
        // for stars 
        for(int j = 0; j < row - i ; j++){
            cout << "*" << " "; 
        }
    cout << endl;    
    }
    return 0;
}