#include <iostream>
using namespace std;

int main (){
    int row = 8; 
    for(int i = 0; i < row; i ++){
        // for space
        for(int j = 0; j < i ; j++){
            cout <<" ";

        }
        // for stars 
        for(int j = 0; j < row - i - 1 ; j++){
            cout << "* "; 
        }
    cout << endl;    
    }




    int row1 = 8;
    for( int i = 0 ; i < row1; i++){
        // for space 
        for( int j = 0 ; j < row1 - i - 1; j++){
            cout  <<" ";
        }
        // for stars
        for(int j = 0 ; j < i + 1; j++){
            cout << "* ";
        }
    cout << endl ; 
    }
    return 0;
}