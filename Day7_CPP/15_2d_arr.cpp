#include <iostream>
#include <vector>
#include <cmath> // For abs()

using namespace std;

int diagonalDifference(const vector<vector<int>> &matrix)
{
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    for (size_t i = 0; i < matrix.size(); ++i)
    {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][matrix.size() - i - 1];
    }

    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main()
{
    vector<vector<int>> matrix = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}};

    cout << "Absolute diagonal difference: " << diagonalDifference(matrix) << endl;

    return 0;
}
