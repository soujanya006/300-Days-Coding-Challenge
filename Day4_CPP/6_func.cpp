#include <iostream>
using namespace std;

int add_sum_3(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

int main()
{
    int a, b, c;
    cout << "enter the 3 numbers:" << endl;
    cin >> a >> b >> c;
    cout << add_sum_3(a, b, c);
    return 0;
}