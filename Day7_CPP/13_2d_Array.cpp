#include <iostream>
#include <vector>

using namespace std;

// Function to perform convolution on a 6x6 image with a 4x4 filter
// Results in a 3x3 output matrix
vector<vector<int>> performConvolution(const vector<vector<int>> &image, const vector<vector<int>> &filter)
{
    int imageSize = image.size();   // Assuming image is square
    int filterSize = filter.size(); // Assuming filter is square
    int outputSize = imageSize - filterSize + 1;

    // Initialize output matrix with zeros
    vector<vector<int>> output(outputSize, vector<int>(outputSize, 0));

    // Modified convolution process to move down first, then right
    for (int j = 0; j <= imageSize - filterSize; ++j)
    { // This loop moves right
        for (int i = 0; i <= imageSize - filterSize; ++i)
        { // This inner loop moves down
            // Initialize sum for the current position
            int sum = 0;
            for (int fi = 0; fi < filterSize; ++fi)
            {
                for (int fj = 0; fj < filterSize; ++fj)
                {
                    sum += image[i + fi][j + fj] * filter[fi][fj];
                }
            }
            // Assign the computed sum to the output matrix
            output[i][j] = sum;
        }
    }

    return output;
}

int main()
{
    // Input image (6x6)
    vector<vector<int>> image = {
        {1, 2, 3, 4, 5, 6},
        {0, 0, 0, 0, 11, 12},
        {0, 0, 0, 0, 17, 18},
        {0, 0, 0, 0, 23, 24},
        {0, 0, 0, 0, 29, 30},
        {31, 32, 33, 34, 35, 36}};

    // Filter (4x4)
    vector<vector<int>> filter = {
        {1, 0, -1, 0},
        {0, 1, 0, -1},
        {1, 0, -1, 0},
        {0, 1, 0, -1}};

    // Perform convolution
    vector<vector<int>> output = performConvolution(image, filter);

    // Print the output matrix
    cout << "Convolution Output:" << endl;
    for (const auto &row : output)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
