#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

int row_sum(const vector<vector<int>> &array)
{

    for (int i = 0; i < array.size(); ++i)

    { // Iterate over each row.
        int sum = 0;

        for (int j = 0; j < array[i].size(); ++j)

        {
            sum = sum + array[i][j];
            // Iterate over each column in the current row.
        }
        cout << sum << endl;
    }
}
int main()
{
    cout << " element search in array" << endl;
    vector<vector<int>> array1 = {
        {1, 2, 3},
        {4, 35, 6},
        {7, 8, 9}};

    row_sum(array1);
    return 0;
}