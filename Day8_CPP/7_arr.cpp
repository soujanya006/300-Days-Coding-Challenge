#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr1 = {
        {1, 0, 1, 1},
        {0, 1, 1, 0},
        {0, 0, 0, 1},
        {0, 0, 1, 1},
        {0, 0, 1, 0}};

    cout << arr1.size() << endl;    // tells the number of row
    cout << arr1[0].size() << endl; // tells the number of cols

    // Print the first row
    for (int i = 0; i < arr1.size(); i++)
    {
        int sum = 0;

        for (int j = 0; j < arr1[0].size(); j++)
        {
            sum = sum + arr1[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
    cout << endl;

    return 0;
}
