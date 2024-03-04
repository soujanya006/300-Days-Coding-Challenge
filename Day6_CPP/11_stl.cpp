#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/// @brief shift right 

void input_vector(vector<int>& vector1){
    cout <<"Enter the max elements for xor:"<< endl;
    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        cout << "enter the element;" << i << endl;
        int d;
        cin >> d;
        vector1.push_back(d);
    }
}

void print_vector(vector<int>& vector1){
    cout << "vector looks like this :" << endl;

    for (const auto &element : vector1) { //range based loop will 
    //automatically take the range of the container (vector1)
    cout << element << ' ';
    }
    cout << endl;

}
void shift_right(vector<int>& vector1){
    // Check if the vector is empty or contains only one element
    if (vector1.size() <= 1) return; // In such cases, shifting does not change the vector

    int temp = vector1.back(); // Save the last element

    // Start shifting from the second-to-last element down to the first
    for(int i = vector1.size() - 1; i > 0; i--){
        vector1[i] = vector1[i-1]; 
    }

    vector1[0] = temp; // Place the saved last element at the start
}

int main(){


    vector<int> vector1;

    input_vector(vector1);

    print_vector(vector1);

    shift_right(vector1);

    cout << "after operation" << endl;

    print_vector(vector1);

    return 0;
}