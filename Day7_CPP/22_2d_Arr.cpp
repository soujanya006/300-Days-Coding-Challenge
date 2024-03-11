#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;
// Number of Good Pairs | 3 Approaches | META | Leetcode - 1512

int row_sum(const vector<int> &array)
{
    int sum = 0;

    for (int i = 0; i < array.size() - 1; ++i)

    {

        for (int j = i + 1; j < array.size(); ++j)
        {
            if (array[i] == array[j])
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
}
int main()
{
    cout << " element search in array" << endl;
    vector<int> array = {1, 2, 3, 1, 1, 3};

    row_sum(array);
    return 0;
}