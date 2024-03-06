#include <iostream>
#include <vector>
using namespace std;

// jagged arrray

int main()
{
    // Creating rows with different sizes and initializing them with values
    vector<int> vec1(10, 0);
    vector<int> vec2(5, 1);
    vector<int> vec3(7, 0);
    vector<int> vec4(3, 1);
    vector<int> vec5(20, 0);

    // Creating a 2D vector (vector of vectors)
    vector<vector<int>> brr;

    // Adding rows to the 2D vector
    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    // Iterating over the 2D vector to print its contents
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {

            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
