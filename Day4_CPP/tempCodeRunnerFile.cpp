#include <iostream>
#include <vector>
using namespace std;

void top_triangle(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* "
                 << " ";
        }
        cout << endl;
    }
}

void bottom_triangle(int a)
{
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 1; j < a - i; j++)
        {
            cout << "* "
                 << " ";
        }
        cout << endl;
    }
}

int main()
{

    cout << "hello there :) " << endl;

    int a = 4;
    top_triangle(a);
    bottom_triangle(a);

    top_triangle(a);
    bottom_triangle(a);

    top_triangle(a);
    bottom_triangle(a);

    top_triangle(a);
    bottom_triangle(a);

    return 0;
}