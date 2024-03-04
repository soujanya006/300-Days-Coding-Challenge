#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse

void rotateMatrix(std::vector<std::vector<int>>& matrix) {
    int m = matrix.size(); // Assuming a square matrix, so m is the number of rows/columns

    // Transpose the matrix
    for(int i = 0; i < m; ++i) {
        for(int j = i; j < m; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row of the matrix
    for(int i = 0; i < m; ++i) {
        std::reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    // Define a matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Rotate the matrix
    rotateMatrix(matrix);

    // Output the rotated matrix
    for(const auto& row : matrix) {
        for(int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
