#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> array1(5, vector<int>(10, 7));

    // Print the 2D vector
    for (int i = 0; i < array1.size(); i++)
    { // Loop over each row
        for (int j = 0; j < array1[i].size(); j++)
        { // Loop over each column of the current row
            cout << array1[i][j] << " ";
        }
        cout << endl; // Newline after each row
    }
}