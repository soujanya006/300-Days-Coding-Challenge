#include <iostream>
using namespace std;

const int SIZE = 10;
int arr[SIZE] = {1, 1, 0, 1, 0, 1, 1, 0, 1, 0};

void countOnesAndZeroes(const int arr[], int size)
{
    int countOnes = 0;
    int countZeroes = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZeroes++;
        }
        else if (arr[i] == 1)
        {
            countOnes++;
        }
    }
    cout << "Ones: " << countOnes << "\nZeroes: " << countZeroes << endl;
}

int main()
{
    countOnesAndZeroes(arr, SIZE);
    return 0;
}