#include <iostream>
using namespace std;

int main (){
    for (int i = 0; i < 5; i++ ){
        cout << " outer Loop: " << i << endl;
        for (int j = 0; j < 5; j++){
            cout << "inner loop: " << j << endl;
        }
    }
    return 0;
}