#include <iostream>
using namespace std;

void greet() {
    cout<<endl;
    cout << "Hello! This is inside the function." << endl;
    cout<<endl;
    return;
    cout << "Hello! This is inside the function part 2." << endl; // after return nothing is executed
}

int main() {
    cout<<endl;
    cout << "Before function call." << endl;

    greet();
    cout << "After function call." << endl;

    return 0;
}
