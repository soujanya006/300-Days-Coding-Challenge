#include <iostream>
using namespace std;

int main(){
    //reverse pyramid
    int row = 5;
    for (int i = 0; i < row; i++){
        for(int j = 0; j < row-i; j++){
            cout << "* ";
        }
    cout << endl ; 
    }

    //pyramid
    int row1 = 5;
    for(int i = 0 ; i < row1; i++){
        for(int j = 0 ; j < i + 1; j++){
            cout << "* ";
        }
    cout << endl;
    }


    return 0;
}