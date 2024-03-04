#include<iostream>
using namespace std;

/// @brief 2d array search 

int main() {

    int arr[2][3] = {
        {4,6,7},
        {12,5,2*4}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) { 
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    int target = 8;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) { 
            if(arr[i][j] == target){
                cout << "found at : " << i <<","<< j <<endl;
            }
        }
        cout << endl;
    }
    return 0;
}
