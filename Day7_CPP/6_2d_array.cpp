#include <iostream>
#include <vector>
using namespace std;


int main() {
    // Declare a 2D vector named 'arr' with 5 rows, each 
    // row is a vector of int with 10 elements initialized to 0
    vector<vector<int>> arr(5, vector<int>(10, 0));

    // Print the 2D vector
    for (int i = 0; i < arr.size(); i++) { // Loop over each row
        for (int j = 0; j < arr[i].size(); j++) { // Loop over each column of the current row
            cout << arr[i][j] << " ";
        }
        cout << endl; // Newline after each row
    }

    return 0;
}
