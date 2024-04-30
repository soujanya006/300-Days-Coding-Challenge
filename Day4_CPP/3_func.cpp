#include <iostream>
using namespace std;

void top_triangle(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void bottom_triangle(int b)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    top_triangle(5);
    bottom_triangle(5);

    top_triangle(4);
    bottom_triangle(4);

    top_triangle(5);
    bottom_triangle(5);
    return 0;
}