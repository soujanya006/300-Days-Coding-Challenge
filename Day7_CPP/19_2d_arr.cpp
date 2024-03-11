#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool searchElement(const std::vector<std::vector<int>> &array, int target)
{
    for (int i = 0; i < array.size(); ++i)
    { // Iterate over each row
        for (int j = 0; j < array[i].size(); ++j)
        { // Iterate over each column in the current row
            if (array[i][j] == target)
            {
                // Element found
                return true;
            }
        }
    }
    // Element not found
    return false;
}
int main()
{
    cout << " element search in array" << endl;
    vector<vector<int>> array1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << searchElement(array1, 10) << endl;
    return 0;
}