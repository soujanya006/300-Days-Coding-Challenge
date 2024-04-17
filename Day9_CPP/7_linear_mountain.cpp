#include <iostream>
#include <vector>

using namespace std;

// using linear search finding the
//  peak element in a array.

void mountain_element(const vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
        return; // Handle empty array edge case

    for (int i = 0; i < n - 1; i++)
    { // Only iterate to n - 2 to avoid accessing out of bounds
        if (arr[i] > arr[i + 1])
        {
            cout << arr[i] << endl;
            return; // Exit after finding the first peak
        }
    }

    // If no peak found before the last element, check if the last element is a peak
    if (n > 1 && arr[n - 1] > arr[n - 2])
    {
        cout << arr[n - 1] << endl;
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 60, 2, 1}; // 60 is the mountain element here
    mountain_element(arr1);                 // Expect to print 60

    return 0;
}
