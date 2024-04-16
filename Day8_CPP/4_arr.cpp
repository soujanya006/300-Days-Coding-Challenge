#include <iostream>
#include <vector>

using namespace std;


/// @brief leetcode 

void sort_array(vector<int> &arr1)
{
    cout << " hiiiiiiii  " << endl;
    int j = 0; // Initialize j
    int n = arr1.size();
    int k = n - 1;

    int i = 0;

    while (i <= k)
    {

        if (arr1[i] == 2)
        {
            swap(arr1[i], arr1[k]);
            k--;
        }

        else if (arr1[i] == 0)
        {
            swap(arr1[i], arr1[j]);
            i++;
            j++;
        }

        else
        {
            i++;
        }
    }
}

int main()
{

    vector<int> arr1 = {1, 2, 0, 2, 0, 1, 2,
                        2, 2, 1, 0, 1, 2};

    cout << "hello , here printing the original array" << endl;

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // cout << arr1.size();

    sort_array(arr1);

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}