#include <iostream>
using namespace std;

/// @brief print all the pairs in the array

const int size = 3;
int arr[size] = {10, 20, 30};

void print_pairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}

int main()
{
    print_pairs(arr, size);
    return 0;
}