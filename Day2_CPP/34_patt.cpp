#include <iostream>
using namespace std;

int main(){

    int n = 6;
    for(int i = 0; i < n; i++){

        for(int j = i + 1; j >= 1 ; j--){
            cout << j; 
        }
        
    cout << endl;
    }
    return 0;

}