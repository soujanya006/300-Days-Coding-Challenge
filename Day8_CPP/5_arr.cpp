#include <iostream>
#include <vector>

using namespace std;

/// @brief leetcode question, uisng modulus operator

void rotate_N_number(vector<int> &arr1, int &k)
{
    int n = arr1.size();
    vector<int> arr2(n);

    for (int i = 0; i < n; i++)
    {
        int new_i = (i + k) % n;
        /// k= 2

        /// i=0, new_i=0+2 % 7 =2
        /// i=1, new_i=1+2 % 7 =3
        /// i=2, new_i=2+2 % 7 =4
        /// i=3, new_i=3+2 % 7 =5
        /// i=4, new_i=4+2 % 7 =6
        /// i=5, new_i=5+2 % 7 =0
        /// i=6, new_i=6+2 % 7 =1

        ///
        arr2[new_i] = arr1[i];
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
}

int main()
{
    vector<int> arr1 = {10, 20, 30, 40,
                        50, 60, 70, 80};

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    int k = 2;

    rotate_N_number(arr1, k);

    return 0;
}