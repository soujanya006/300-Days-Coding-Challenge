#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int row_sum(vector<vector<int>> &array1)
{
    int rows = array1.size();
    int cols = array1[1].size();

    for (int i = 0; i < cols; ++i)

    {
        for (int j = i; j < rows; ++j)
        {
            swap(array1[i][j], array1[j][i]);
        }
    }

    // Print the 2D vector
    for (int i = 0; i < array1.size(); i++)
    { // Loop over each row
        for (int j = 0; j < array1[i].size(); j++)
        { // Loop over each column of the current row
            cout << array1[i][j] << " ";
        }
        cout << endl; // Newline after each row
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