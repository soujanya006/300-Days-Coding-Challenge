#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transposeMatrix(const vector<vector<int>> &matrix)
{
    if (matrix.empty())
        return {};

    size_t rows = matrix.size();
    size_t cols = matrix[0].size();

    vector<vector<int>> transpose(cols, vector<int>(rows, 0));

    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < cols; ++j)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<vector<int>> transposed = transposeMatrix(matrix);

    cout << "Transposed Matrix:" << endl;
    for (const auto &row : transposed)
    {
        for (int elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
