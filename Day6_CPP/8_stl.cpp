#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/// @brief find unique number

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

void xor_vector(vector<int>& vector1){
    int num;
    int zero = 0;
    for (int i = 0; i < vector1.size() ; i++){
        num = (zero) xor (vector1[i]);
    }
    cout << num<< endl;

}



int main(){
    vector<int> vector1;

    // vector1.push_back(1);
    // cout << vector1[0];
    
    input_vector(vector1);
    print_vector(vector1);
    xor_vector(vector1);

    //print_vector(vector1);


    return 0;

}