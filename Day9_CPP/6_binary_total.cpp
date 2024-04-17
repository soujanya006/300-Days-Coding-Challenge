#include <iostream>
#include <vector>

using namespace std;
int binary_first(vector<int> &arr1, int target)
{
    int start = 0;
    int end = arr1.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr1[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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

    return ans;
}

int binary_last(vector<int> &arr1, int target)
{
    int start = 0;
    int end = arr1.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr1[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 2, 2, 2, 2, 7};

    int target = 2;

    // first element

    int results = binary_first(arr1, target);

    if (results == -1)
    {
        cout << " not found" << endl;
    }
    else
        cout << results << endl;

    // last element

    int results2 = binary_last(arr1, target);

    if (results2 == -1)
    {
        cout << " not found" << endl;
    }
    else
        cout << results2 << endl;

    cout << results2 - results + 1;

    return 0;
}