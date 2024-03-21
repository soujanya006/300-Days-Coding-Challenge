#include <iostream>

using namespace std;

/// @brief sum of array

int main()
{

    int arr[2][3] = {
        {4, 6, 7},
        {12, 5, 2055}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "sum is " << sum << endl;
    }

    return 0;
}
