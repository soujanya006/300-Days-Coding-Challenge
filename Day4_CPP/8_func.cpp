#include <iostream>
using namespace std;

void CountN(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
}

int main()
{

    CountN(6);
    return 0;
}