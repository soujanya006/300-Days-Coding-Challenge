#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void shift_number_by_one(vector<int> &arr1)
{
    int j = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] < 0)
        {
            swap(arr1[i], arr1[j]);
            j++;
        }
    }
}

int main()
{

    cout << "Hello printing the array : " << endl;

    vector<int> arr1 = {1, -34, 43, -8, 41,
                        -6, -20, 60, 76, -32};

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    shift_number_by_one(arr1);
    cout << endl;

    // printing the array after the function is applied
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}