#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

int max_element(const vector<vector<int>> &array)
{
    int max = INT_MIN;
    for (size_t i = 0; i < array.size(); ++i)
    { // Iterate over each row
        for (size_t j = 0; j < array[i].size(); ++j)
        { // Iterate over each column in the current row
            if (array[i][j] > max)
            {
                // max element
                max = array[i][j];
            }
        }
    }

    return max;
}
int main()
{
    cout << " element search in array" << endl;
    vector<vector<int>> array1 = {
        {1, 2, 3},
        {4, 35, 6},
        {7, 8, 9}};

    cout << max_element(array1) << endl;
    return 0;
}