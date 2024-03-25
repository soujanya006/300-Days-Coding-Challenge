#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    cout << "hello im back: " << endl;

    vector<vector<int>> array_1 = {
        {1, 2, 3, 1},
        {4, 5, 6, 4},
        {7, 8, 9, 7}};

    cout << array_1.size() << endl;    // rows
    cout << array_1[1].size() << endl; // colomns

    // printing 2d array.
    for (int i = 0; i < array_1.size(); i++)
    {
        for (int j = 0; j < array_1[i].size(); j++)
        {
            cout << array_1[i][j] << " ";
        }

        cout << endl;
    }

    

    return 0;
}