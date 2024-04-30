#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    char arr1[10];
    float arr2[20];
    bool arr3[3];
    long arr5[44];

    cout << " the address of arr is " << &arr << endl;
    int arr44[40] = {3, 4, 2, 4, 5, 6, 7, 5};
    cout << arr44[3] << endl;
    cout << arr44[33] << endl; // will show zero
    cout << "hello" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr44[i] << endl;
    }

    return 0;
}