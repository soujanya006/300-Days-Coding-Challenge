#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse

using namespace std;

void rotateMatrix(vector<vector<int>> &matrix)
{
    int N = matrix.size();

    // Transpose the matrix
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < N; ++i)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Function to print the matrix
void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Example 2D matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    // Rotate the matrix
    rotateMatrix(matrix);

    cout << "\nRotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
