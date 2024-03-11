#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

int row_sum(const vector<vector<int>> &array1)
{
    int rows = array1.size();
    int cols = array1[1].size();

    for (int i = 0; i < cols; ++i)

    { // Iterate over each row.
        int sum = 0;

        for (int j = 0; j < rows; ++j)

        {
            sum = sum + array1[j][i];
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