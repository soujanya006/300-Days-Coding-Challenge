#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "hello: " << endl;

    // Input image (6x6)
    vector<vector<int>> image = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}};

    // Filter (4x4)
    vector<vector<int>> filter = {
        {1, 0, -1, 0},
        {0, 1, 0, -1},
        {1, 0, -1, 0},
        {0, 1, 0, -1}};

    for (int i = 2; i <= 5; i++)
    {
        for (int j = 2; j <= 5; j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}