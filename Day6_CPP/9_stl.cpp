#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/// @brief print the pairs in a vector


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


void print_pairs(vector<int>& vector1){
    for(int i = 0; i < vector1.size(); i ++)
    {
        for (int j = i; j < vector1.size(); j ++)
        {
            cout<< vector1[i] << " " << vector1[j]<< endl;


        }
        cout << endl;
        
    }
}

int main(){


    vector<int> vector1;

    input_vector(vector1);
    print_vector(vector1);
    print_pairs(vector1);
    print_vector(vector1);

    return 0;
}