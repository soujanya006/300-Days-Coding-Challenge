#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

vector<int> findArrayIntersection(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans; // This will hold the intersection elements

    // Loop over the first array
    for (int i = 0; i < arr1.size(); ++i) {
        int element = arr1[i]; // Current element from the first array

        // Loop over the second array
        for (int j = 0; j < arr2.size(); ++j) {
            // Check if the current element of the first array is in the second array
            if (element == arr2[j]) {
                ans.push_back(element); // Add to the intersection result
                arr2[j] = INT_MIN; // Mark this element as visited, using INT_MIN as a flag
                break; // Move to the next element in the first array
            }
        }
    }

    return ans; // Return the result
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {2, 4, 6, 8};

    // Find the intersection
    vector<int> intersection = findArrayIntersection(arr1, arr2);

    // Print the intersection
    cout << "Intersection of the arrays is: ";
    for (int num : intersection) {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}
