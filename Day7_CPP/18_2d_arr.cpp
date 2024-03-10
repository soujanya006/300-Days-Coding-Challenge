#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printCol_wise(const vector<vector<int>> array1)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array1[j][i] << " ";
            // [0][0]
            //[0][1]
            //[0][2]
            //[1][0] and so one , printing col wise
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> array1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };

    printCol_wise(array1);

    return 0;
}