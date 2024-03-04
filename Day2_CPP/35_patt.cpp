#include <iostream>
using namespace std;

int main(){

    int n = 6;
    for(int i = 0; i < n; i++){

        char ch = 'A';
        for(int j = 0; j < i+1; j++){
            cout << (ch + 1) << " ";
        }

        for(int j = i ; j >= 1 ; j--){
            cout << ch  << " "; 
        }
        
    cout << endl;
    }
    return 0;

}