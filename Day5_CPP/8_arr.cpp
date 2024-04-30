#include <iostream>
using namespace std;

const int size = 9;
int arr[size] = {1, 7, 1, 2, 2, 3, 3, 4, 4};

int find_unique_num(int arr[], int size)
{
    int unique = 0;

    for (int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
}

int main()
{

    cout << find_unique_num(arr, size);
    return 0;
}