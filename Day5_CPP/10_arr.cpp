#include <iostream>
using namespace std;

bool isBitSet(int num, int bitPosition)
{
    // Create a mask with a 1 at the bit position to check
    int mask = 1 << bitPosition;

    // Use bitwise AND to isolate the bit and check if it's set
    if ((num & mask) != 0)
    {
        return true; // The bit is set
    }
    else
    {
        return false; // The bit is not set
    }
}

int main()
{
    int num = 10;        // Example number
    int bitPosition = 3; // We want to check the 3rd bit (counting from 0)

    if (isBitSet(num, bitPosition))
    {
        cout << "The " << bitPosition << "rd bit is set in " << num << "." << endl;
    }
    else
    {
        cout << "The " << bitPosition << "rd bit is not set in " << num << "." << endl;
    }

    return 0;
}
