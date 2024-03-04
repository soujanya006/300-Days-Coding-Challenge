#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    // Create a vector of vectors
    vector<vector<int>> myMatrix = {
        {1, 2, 3, 4, 5, 6},
        {12, 4, 64, 63, 8, 3}
    };

    // Reverse the second row of the matrix
    reverse(myMatrix[1].begin(), myMatrix[1].end());

    // Print the matrix
    for(int i = 0; i < myMatrix.size(); ++i) {
        for(int j = 0; j < myMatrix[i].size(); ++j) {
            cout << myMatrix[i][j] << " ";
        }
        cout << endl; // Newline for each row
    }

    return 0;
}
