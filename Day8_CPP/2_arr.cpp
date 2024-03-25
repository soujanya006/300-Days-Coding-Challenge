#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/// @brief two sum

/// @param array1 The vector of integers to be searched for pairs.
/// @param target The target sum for the pairs of integers.
/// @return void

int main()
{
    vector<int> array1 =

        {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 4, 5, 6};

    int target = 9;

    for (int i = 0; i < array1.size(); i++)
    {
        for (int j = i + 1; j < array1.size(); j++)
        {
            if (array1[i] + array1[j] == target)
            {
                cout << array1[i] << "," << array1[j] << endl;
            }
        }
    }
    return 0;
}