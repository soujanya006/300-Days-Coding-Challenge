#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void array2(const vector<vector<int>> &arr)
{
    // Your code here
    // No return statement needed for a void function.
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void array3(const vector<vector<int>> &arr)
{
    // Your code here
    // No return statement needed for a void function.
    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void array4(const vector<vector<int>> &arr)
{
    // Your code here
    // No return statement needed for a void function.
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };
    // cout << arr[1][2] << endl;
    array2(arr);
    array3(arr);
    array4(arr);
    return 0;
}