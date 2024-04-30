#include <iostream>
using namespace std;

// Function to demonstrate call by value
void incrementByValue(int num)
{
    num = num + 1;
    cout << "Inside increment By Value: " << num << endl;
}

int main()
{
    int a = 5;
    incrementByValue(a);
    cout << "In main after incrementByValue: " << a << endl;
    return 0;
}
