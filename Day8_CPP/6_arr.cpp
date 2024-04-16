#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};

    int n = arr1.size() + 1; // because only 1 element is missing here

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    int sum = 0;

    for (int j = 0; j < arr1.size(); j++)
    {
        sum = sum + arr1[j];
    }
    cout << endl;

    cout << sum << endl;

    int total_sum = ((n) * (n + 1)) / 2;

    cout << total_sum - sum; // here 5 will be the ans

    return 0;
}