#include <iostream>
using namespace std;

int main(){
    int row = 7; 
    for(int i = 0; i < row; i++){
        // for space 
        for( int j = 0; j < i; j++){
            cout <<" ";

        }
        // for stars and space in between 
        for(int j = 0; j < ((2 * row) - (2 * i) - 1); j++){
            if(j == 0 || j == ((2 * row) - (2 * i) - 1) -1 ){
                cout << "* ";

            }
            else {
                cout <<" "; 
            }
        }
    cout << endl; 
    }
    return 0;
}