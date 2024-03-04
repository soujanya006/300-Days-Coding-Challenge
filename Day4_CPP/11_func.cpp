#include <iostream>
using namespace std;

int sum_of_even_nth(int max_num){
    int sum = 0;
    for (int i = 0; i <= max_num; i= i+2){
        sum = sum + i; 
    }
    return sum;
}

int main(){
    cout << sum_of_even_nth(6) << endl;
    return 0;
}