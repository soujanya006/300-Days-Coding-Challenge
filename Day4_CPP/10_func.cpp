#include <iostream>
using namespace std;

int sum_of_nth(int max_num){
    int sum = 0;
    for (int i = 0; i <= max_num; i++){
        sum = sum + i; 
    }
    return sum;
}

int main(){
    cout << sum_of_nth(6) << endl;
    return 0;
}