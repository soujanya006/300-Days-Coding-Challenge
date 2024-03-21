#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

/// @brief

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
    int maxx = INT_MIN;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > maxx)
            {
                maxx = arr[i][j];
            }
        }
        cout << endl;
    }

    cout << maxx << endl;
    return 0;
}
