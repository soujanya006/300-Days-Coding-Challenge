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

    return 0;
}