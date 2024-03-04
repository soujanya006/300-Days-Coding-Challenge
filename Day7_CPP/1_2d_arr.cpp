#include<iostream>
using namespace std;

/// @brief 2d array printing 
// also transpose of matrix

int main() {

    int arr[3][3] = {
        {4,6,7},
        {8,5,23},
        {34,13,98}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    // // for transpose
    // use this, below code lines are
    // just an showing the transpose witin the same array
    
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) { 
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }


    //printting the same but 
    //with a differnt array called brr
    int brr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
            brr[i][j] = arr[j][i] ;
        }
        cout << endl;
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
