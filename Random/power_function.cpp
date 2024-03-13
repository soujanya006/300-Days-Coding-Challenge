#include<iostream>
using namespace std;

float power(float num1, int num2) {
    
    //cout << a <<endl;

    float ans = 1;

    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }

    return ans;
}
int main()
{
    float c , d;
    cout<<"enter the two numbers"<<endl;
    cin>> c >> d;

    float answer = power(c,d);
    cout << "answer is " << answer << endl;

    return 0;
}