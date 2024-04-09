#include <iostream>
using namespace std;

int main()
{
    cout << "_____________" << endl;
    // square star pattern
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "* "
                 << " ";
        }
        cout << endl;
    }
    cout << "_____________" << endl;

    return 0;
}