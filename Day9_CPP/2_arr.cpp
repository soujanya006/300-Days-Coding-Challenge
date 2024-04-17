#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "hello:" << endl;
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int target = 3;

    bool found = false; // Flag to track if the target is found

    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] == target)
        {
            cout << "Target found at index " << i << endl;
            found = true;
            break; // Exit the loop once the target is found
        }
    }

    if (!found)
    {
        cout << "Target not found in the vector." << endl;
    }

    return 0;
}
