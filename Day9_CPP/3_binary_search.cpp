#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Target found, return its index
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Continue searching in the right half
        }
        else
        {
            right = mid - 1; // Continue searching in the left half
        }
    }

    return -1; // Target not found
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};

    int target = 7;
    int index = binarySearch(arr, target);

    if (index != -1)
    {
        cout << "Target " << target << " found at index " << index << endl;
    }
    else
    {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
