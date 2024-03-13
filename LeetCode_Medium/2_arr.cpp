#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Sort_Colors(vector<int> &arr, int size)
{
    int i = 0;        // for 0
    int j = 0;        // for 1
    int k = size - 1; // for 2
    while (j <= k)
    {
        if (arr[j] == 2)
        {
            swap(arr[j], arr[k]);
            k--;
        }
        else if (arr[j] == 0)
        {
            swap(arr[j], arr[i]);
            j++;
            i++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Sort_Colors(nums, nums.size());

    return 0;
}