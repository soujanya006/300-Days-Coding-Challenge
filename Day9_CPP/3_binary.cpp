#include <iostream>
#include <vector>

using namespace std;
int binarySearch(vector<int> &arr1, int target)
{
    int start = 0;
    int end = arr1.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr1[mid] == target)
        {
            return mid;
        }
        else if (arr1[mid] > target)
        {
            end = mid - 1;
        }

        else if (arr1[mid] < target)
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7};

    int target = 7;

    int results = binarySearch(arr1, target);

    if (results == -1)
    {
        cout << " not found" << endl;
    }
    else
        cout << results;

    return 0;
}