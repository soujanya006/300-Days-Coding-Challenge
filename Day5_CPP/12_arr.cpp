#include <iostream>
using namespace std;

const int size = 7;
int arr[size] = {1, 2, 3, 4, 5, 6, 7};

void print_from_function(int arr[], int size)
{
    cout << "printing from the function:" << endl;

    arr[0] = 120; // changed the value from the function
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "leaving from the function in  1   2    3 : " << endl;
}
int main()
{

    cout << "printing the array before it goes to function: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "now going to the function in 1 2 3 boom :" << endl;

    print_from_function(arr, size);

    cout << "again printing from main function  with changed value" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}