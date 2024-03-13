#include <iostream>
using namespace std;

int main() {
    int arr[5] = { [0 ... 4] = -54 };

    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
