#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/// @brief VMM aalto Uni project

int main(){


    int arr[6][6]= {    {1,2,3,4,5,6},
                        {7,8,9,10,11,12},
                        {13,14,15,16,17,18},
                        {19,20,21,22,23,24},
                        {25,26,27,28,29,30},
                        {31,32,33,34,35,36}
                                            };

    vector<int> myArray;
    int rows = 6;
    int cols = 6;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 3; j++){
            myArray.push_back(arr[i][j]);
        }
    }

    for(int i = 0; i < myArray.size(); i++){
        cout << myArray[i] << " ";
    }

    return 0;
}